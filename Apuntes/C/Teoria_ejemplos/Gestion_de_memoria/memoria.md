# Gestión de memoria en c

En principio, los detalles de cómo se almacenan y organizan los datos en memoria no son visibles a un programador. 
Sin embargo, el lenguaje de programación C ofrece una gestión de memoria muy cercana a la RAM.  
Para realizar un uso eficiente de la memoria es preciso conocer más de cerca cómo se organiza la memoria de un programa.

## a) Tipos de memoria de un programa

Un programa en C almacena sus datos en memoria en tres áreas diferentes:

- **Memoria Global**:

Es el área donde se almacenan las **variables que se declaran globales o estáticas** y **las constantes de tipo cadena de caracteres**. 
Es decir, en esta zona de memoria se almacenan todos aquellos datos que están presentes desde el comienzo del programa hasta que termina.

- **Memoria estática (Pila/Stack)**:

Es un área en la que las variables aparecen y desaparecen en un momento puntual de la ejecución de un programa. 
Se utiliza principalmente para **almacenar variables locales a las funciones**. Estas variables tienen un ámbito reducido, sólo están disponibles mientras se está ejecutando la función en la que han sido definidas. 
En la pila se encuentran todas estas variables, y por tanto, en esa zona se está continuamente insertando y borrando variables nuevas.

- **Memoria dinámica (Heap)**:

Esta zona contiene memoria disponible para que se reserve y libere en cualquier momento durante la ejecución de un programa. 
No está dedicada a variables locales de las funciones como la pila, sino que es **memoria denominada “dinámica” para estructuras de datos que no se saben si se necesitan**, e incluso tampoco se sabe su tamaño hasta que el programa está ejecutando.

![tipos_memoria](img/tipos_memoria.png)

Como las áreas de heap y pila tienen un tamaño variable, el sistema operativo reserva un espacio inicial y las dos zonas crecen y decrecen dentro de ese espacio máximo.


## b) Pila (stack) y las variables locales

El funcionamiento de la pila es como un espacio de anotación temporal. Por ejemplo, cuando se invoca una función, sus variables temporales están activas sólo durante su ejecución. Cuando la función termina, esas variables ya no existen. No tiene lógica reservar un espacio en la memoria global para estas variables. 

Los parámetros de una función también se consideran variables locales. Su ámbito de validez es igual al de las variables locales de una función con la salvedad de que comienzan la ejecución con un valor inicial que viene dado por el código que realiza la llamada.

> result = function(3, x+y);

Cuando se ejecuta la llamada a function, se crea un nuevo espacio en la pila en el que se almacenan los parámetros y las variables locales de la función. 
Sobre el espacio creado para el primer parámetro se copia el valor 3. Análogamente, sobre el espacio creado para el segundo parámetro se copia el valor resultante de evaluar la expresión x + y. 

![pila_espacio_funcion](img/pila_espacio_funcion.png)

## c) El heap y la memoria dinámica


La memoria dinámica que se almacena en el heap es aquella que se utiliza para almacenar datos que se crean en el medio de la ejecución de un programa. 
Por ejemplo, supóngase un programa que abre un fichero y lee una colección de palabras. ¿Cuántas palabras y de qué tamaño hay en el fichero? Hasta que no se procese el fichero en su totalidad, no es posible saberlo. 

Las cuatro operaciones principales para gestionar memoria en C son:

- **`void *malloc(size_t size)`**: Es la función para reservar tantos bytes consecutivos de memoria como indica su único parámetro. 
**Devuelve la dirección de memoria de la porción reservada**. La memoria no se inicializa a ningún valor.

- **`void *calloc(size_t nmembers, size_t size)`**: Reserva espacio para tantos elementos como indica su primer parámetro nmembers, y cada uno de ellos con un tamaño en bytes como indica el segundo. 
En otras palabras, reserva nmembers * size bytes consecutivos en memoria. Al igual que la función anterior devuelve la dirección de memoria al comienzo del bloque reservado. Esta función inicializa todos los bytes de la zona reservada al valor cero.

- **`void free(void *ptr)`**: Función que dado un puntero, libera el espacio previamente reservado. **El puntero que recibe como parámetro esta función tiene que ser el que se ha obtenido con una llamada de reserva de memoria**. 
No es necesario incluir el tamaño. Una vez que se ejecuta esta llamada, los datos en esa porción de memoria se consideran basura, y por tanto pueden ser reutilizados por el sistema.

- **`void *realloc(void *ptr, size_t size)`**: Función para redimensionar una porción de memoria previamente reservada a la que apunta el primer parámetro al tamaño dado como segundo parámetro. 
**La función devuelve la dirección de memoria de esta nueva porción redimensionada**, que no tiene por qué ser necesariamente igual al que se ha pasado como parámetro. 
Los datos se conservan intactos en tantos bytes como el mínimo entre el tamaño antiguo y el nuevo.

## d) Función sizeof()

Para reservar memoria se debe saber exactamente el número de bytes que ocupa cualquier estructura de datos.

La función recibe como único parámetro o el nombre de una variable, o el nombre de un tipo de datos, y devuelve su tamaño en bytes.

## e) Llamadas a las funciones de gestión de memoria

El uso de memoria dinámica y el de punteros van de la mano. Un programa puede manipular una porción de memoria dinámica porque dispone de la dirección de su primer byte, y esta se almacena en un dato de tipo puntero. Este puntero se utiliza tanto para acceder a los datos que se almacenen en la memoria reservada, como para liberar ésta cuando no sea necesaria (con la función **free()**).

Cuando se llama a la función **malloc** el valor que retorna es una dirección de memoria de tipo void *, es decir, puntero a cualquier dato. Pero esa dirección de memoria se almacena en un programa en un puntero de un tipo diferente. 
Para evitar advertencias del compilador, se antepone a la llamada a malloc lo que se conoce como un “**casting**”. 

- Un casting es una expresión escrita por el programador notificando al compilador de que una variable de un cierto tipo ahora debe ser considerada de otro tipo. 
Por ejemplo, la siguiente expresión reserva espacio para una estructura de tipo struct cell_info y la dirección de ese espacio se asigna al puntero cell_ptr.

~~~C
#define TABLE_SIZE 10
struct cell_info
{
    int a;
    int b;
    int table[TABLE_SIZE];
};
struct cell_info *cell_ptr;

cell_ptr = (struct cell_info *)malloc(sizeof(struct cell_info));
~~~

Nótese que para saber el tamaño exacto de la porción de memoria a reservar se utiliza la función sizeof() que, dado cualquier tipo de datos o variable, devuelve el número de bytes que ocupa en memoria. 

**El casting (struct cell_info *)** hace que la asignación sobre la variable cell_ptr se haga como si la dirección de memoria fuese de este tipo, y por tanto es correcta.

Una vez obtenida la porción de memoria, el acceso se realiza normalmente utilizando el puntero obtenido, por ejemplo:

~~~C
cell_ptr->a = 10;
cell_ptr->b = a + 20;
cell_ptr->table[5] = 0;
~~~

La regla general para invocar a la función malloc se puede enunciar de la siguiente forma. El espacio en memoria dinámica para una variable de tipo T se obtiene mediante

> tipo_var *puntero = (tipo_var *)malloc(sizeof(tipo_var))


Una vez que una estructura de datos reservada con memoria dinámica no se necesita, se libera mediante la llamada a la función free. Siguiendo con el ejemplo anterior, se invoca con la línea:

>free(cell_ptr)

## f) Tablas (listas/arreglos) y punteros

Para el lenguaje de programación C, una tabla se representa internamente sólo como la dirección de memoria a partir de la cual está almacenado su primer elemento.

En adelante, el nombre de la tabla y la dirección de su primer elemento es exactamente lo mismo. 

> tabla == &table[0]

~~~C
struct element 
{
  float number1;
  int number2;
  char letter;
};

struct element *table;

table = (struct element *)malloc(sizeof(struct element) * size);
for (i = 0; i < size; i++) 
{
  table[i].number1 = 0.0;
  table[i].number2 = 10;
  table[i].letter = 'B';
}
~~~

## h) Anomalías en la gestión de memoria en C

De la gestión explícita de memoria se derivan varias posibles anomalías cuando fragmentos de memoria no se pueden liberar porque se ha perdido cualquier referencia a ellos. Es lo que se conoce como “**fuga de memoria**”. Esa porción de memoria permanece reservada pero inaccesible para el resto de la ejecución de un programa.

### h.1) Trastienda de la gestión de memoria

Al comenzar la ejecución de un programa, su memoria se divide en tres zonas: la pila, memoria global y el “heap”. 

El sistema operativo mantiene una tabla interna en la que apunta qué fragmentos del heap están ocupados y qué punteros se han devuelto como resultado de la petición de reserva. 
Cuando un programa ejecuta la función malloc para pedir un nuevo fragmento, el sistema busca una porción del tamaño solicitado, si existe devuelve su dirección de comienzo, y se apunta ese bloque como ocupado. 
De manera análoga, cuando se llama a la función free para liberar un fragmento, el sistema busca en la tabla ese fragmento (que debe estar apuntado previamente como reservado) y libera el espacio para usos futuros. 

![memoria_heap](img/memoria_heap.png)

En resumen se debe asegurar a que cada llamada a malloc tenga una llamada correspondiente a free para liberar la memoria cuando ya no sea necesaria.

### h.2) Fuga de memoria

Esta situación ocurre cuando un programa obtiene memoria dinámica, y el valor del puntero que devuelve el sistema, por error, se pierde. 
En tal caso, ya no es posible invocar a la función free con ese puntero, y la porción de memoria se queda reservada por lo que resta de ejecución. Como ejemplo de fuga de memoria analicemos el siguiente fragmento de código.

~~~C
char *string;
  string = (char *)malloc(100);
  string = NULL;
~~~

La primera línea declara un puntero a carácter.
En la segunda se reserva un espacio de 100 bytes. 
El gestor de memoria devuelve un puntero al comienzo de ese bloque y se almacena en la variable string. En ese momento, la dirección de ese bloque no está almacenada en ningún otro sitio. 
**La línea siguiente asigna el valor NULL al mismo puntero.** ¿Qué ha sucedido con la dirección de memoria de la porción que se acaba de reservar? - Se ha perdido y no hay forma alguna de recuperarla, porque string era la única copia de ese valor. Como consecuencia, la porción de memoria reservada seguirá marcada como ocupada por el resto de ejecución del programa. La memoria se ha fugado.

#### h.2.1) Situación típica
Una situación típica de fuga de memoria es cuando se manipulan estructuras de datos encadenadas. 
En una estructura se almacenan punteros obtenidos mediante llamadas a malloc y en ellos a su vez se almacenan más punteros obtenidos de esta manera. 
La liberación de la memoria que ocupan estas estructuras de datos ha de programarse con sumo cuidado. El siguiente fragmento de código ilustra este problema.

~~~C
struct contact_information 
{
  char *name, *lastname;
  int age;
};

struct contact_information *agenda;
int i;

agenda = (struct contact_information *)calloc(100, sizeof(struct contact_information));
for (i = 0; i < 100; i++) {
  agenda[i].name = (char *)malloc(10);
  agenda[i].lastname = (char *)malloc(30);
  agenda.age = 0;
}
free(agenda);
~~~

La variable agenda se reserva con espacio suficiente para almacenar 100 estructuras del tipo struct contact_information. 
En el bucle, los dos primeros campos de cada una de las estructuras se inicializa con dos punteros que se obtienen mediante malloc. 
Al terminar el bucle, la llamada free(agenda) libera el espacio reservado para la tabla, **pero no el que se ha reservado para las cadenas de texto de cada uno de sus elementos**. 
La forma correcta de liberar la estructura es igualmente con un bucle que atraviese la tabla y libere cada campo por separado con una llamada a free.

Las dos reglas a respetar en cualquier programa en C en lo referente a la gestión dinámica de memoria son:

- Toda porción reservada de forma dinámica (con malloc, calloc o realloc) debe ser liberada mediante una llamada a free.

- Si un programa llega a su última instrucción y tiene bloques de memoria dinámica sin liberar, se considera que el programa es erróneo.

### h.3) Memoria sin inicializar

Otra característica de la gestión dinámica de memoria en C es que la inicialización de la memoria se realiza sólo si así se solicita mediante la llamada a la función calloc. 
En otras palabras, cuando se reserva una porción de memoria mediante una llamada a **malloc, esa porción es visible al programa con su contenido intacto**. Es decir, que no se inicializa a ningún valor en particular. ***Lo más probable es que contenga restos de la información que se ha almacenado previamente.***

### h.4) Sobre escritura de memoria dinámica

El manejo de arrays en C se hace sin comprobación alguna de que el índice utilizado para acceder a un elemento esté en los límites correctos. De este comportamiento se deriva que los punteros y los arrays son, a efectos del compilador, lo mismo, una dirección de memoria sobre la que se puede utilizar entre corchetes un índice para acceder a un elemento. 
Este comportamiento se mantiene para el caso de la memoria dinámica, es decir, si se reserva espacio en memoria dinámica para un puntero o un array y en su acceso se rebasa el tamaño de su porción de memoria, la ejecución continua sin ningún tipo de comprobación. 

~~~C
struct point_info 
{
  int x;
  int y;
}; 

struct point_info *points;

points = (struct point_info *)malloc(100 * sizeof(struct point_info));
points[356].x = 10;
points[356].y = 20;
~~~

### h.5) Acceso a memoria con un puntero corrupto

Cuando la memoria dinámica se reserva, el sistema marca esa porción como ocupada y por tanto sus datos se mantienen. 
Sin embargo, cuando la memoria se libera, su contenido ya no está garantizado, y depende del uso interno que de ella haga el sistema operativo.

Esta observación es importante porque la **función free que recibe como parámetro un puntero, libera su contenido pero no evita que se pueda volver a acceder a él**, en lo que se conoce como un problema de acceso a un “**puntero corrupto**”. La siguiente porción de código muestra un ejemplo de este problema.

~~~C
struct list_element 
{
  int;
  struct list_element *next;
}; 

void destroy(struct list_element *l) 
{
    while (l != NULL) 
    {
      free(l);
      l = l->next;
    }
    return;
}
~~~

**La línea que avanza por la cadena de punteros l = l ->next accede a una porción de memoria apuntada por l que ha sido liberada previamente, por lo tanto, su contenido no está garantizado y puede que el campo next ya no contenga el dato esperado. Una forma de resolver este problema es copiar ese puntero en un lugar en el que no pase esto, por ejemplo, una variable local.**