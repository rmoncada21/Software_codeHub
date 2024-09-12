# Clases en C++
Contenido obtenido del libro de C++ para Ing y Ciencias.

## A) Tipos de datos abstractos (TDA/Clases)

Un tipo de datos abstracto es simplemente un tipo definido por el usuario que define tanto un tipo de datos como las operaciones que pueden ejecutarse en ellos.

### 1. Construcción de una clase
Una clase consta de dos partes, una **sección de declaración** y **otra de implementación**.
La sección de declaración declara tanto los tipos de datos como las funciones para la clase.  Luego se usa la sección de implementación para definir las funciones cuyos prototipos se han declarado en la sección de declaración

~~~C++
class Nombre_clase{
    // Sección de declaración
    // Miembros de la clase
    miembros de datos o variables de instancia
    funciones miembro
};

/*
Sección de implementación de las funiones
*/
~~~

Uso de las palabras claves **private** y **public**: 

- **private:** solo se pueden tener acceso a los miembros de la clase puestos en privado por medio de las funciones de clase o por funciones amigas.

- **public:** se puede acceder desde cualquier lugar. Las funciones de las clase, deben de ser públicas.

Ejemplo de una clase Fecha:

~~~c++
class Fecha{
    // sección de declaración
    private:
        int dia;
        int mes;
        int anio;
    
    public:
        Fecha(int, int, int);
        void estFecha(int, int, int);
        void mostrarFecha();
}
~~~

### 2. Prototipos para funciones

~~~cpp
/*
:: es el operador de resolución de alcance
identifica la función como miembro de la clase
*/
tipo_devuelto nombre_Clase::nombre_Funcion(lista de parametros){
    cuerpo de la función
}
~~~

## B) Constructores y Destructores

### 1. Constructores

Un constructor es una función miembro especial que se llama automáticamente cuando se crea un objeto. Se utiliza para inicializar los miembros del objeto.

Características de los Constructores:

- **Tienen el mismo nombre que la clase.**
- No tienen tipo de retorno (ni siquiera void).
- Pueden ser sobrecargados (puede haber más de uno con diferentes parámetros).

### 2. Destructores

Un destructor es una función miembro especial que se llama automáticamente cuando se destruye un objeto. Se utiliza para liberar recursos que el objeto pudo haber adquirido durante su tiempo de vida (por ejemplo, memoria dinámica).

Como los constructores, un destructor por omisión que no hace nada es proporcionado por el compilador de C++ en ausencia de un destructor explícito. A diferencia de los constructores solo puede haber un destructor por clase. 

Características de los Destructores:

- **Tienen el mismo nombre que la clase, precedido por una tilde ~**.
- No tienen parámetros.
- No tienen tipo de retorno (ni siquiera void).
- No pueden ser sobrecargados (solo puede haber uno por clase).

### 3. Objetos

Son variables definidas como parte de una clase declarada por un usuario. 
Cuando se define un objeto, la funcion constructora de la clase es llamada automaticamente.

> nombre_Clase nombre_Objeto;

Ejemplo 

~~~cpp
int main() {
    Fecha hoy(30, 6, 2024);
    // miembro atributo
    hoy.dia = 20;
    // función
    hoy.mostrarFecha();
    return 0;
}
~~~
Formas de llamar a un constructor a la hora de crear objetos
> Fecha hoy(30, 6, 2004)

> Fecha hoy = Fecha(30, 6, 2004)

`**Nota**`: Sin importar cuál forma de inicialización se use, **en ningún caso deberá declararse un objeto con paréntesis vacíos**. Por ejemplo, **la declaración Fecha a()**; no es la misma que la declaración **Fecha a**;. La última declaración usa los valores del constructor por omisión mientras la primera declaración da como resultado que ningún objeto se cree.

### 4. Constructores sobrecargados y en linea

#### 4.1 Constructores sobrecargados

Un constructor sobrecargado se refiere a tener múltiples constructores en la misma clase, cada uno con diferentes listas de parámetros. La sobrecarga de constructores permite crear objetos de una clase de varias maneras, proporcionando flexibilidad y conveniencia al usuario de la clase.

Los constructores son invocados de manera automática cada vez que se crea un objeto, mientras otras funciones deben ser llamadas de manera explícita por nombre.

Sobrecargar a la función permite que se use el mismo nombre de función con diferentes listas de argumentos. Basado en los tipos de argumentos suministrados, de esta, amanera el compilador determina cuál función usar cuando se encuentra le invoca.

~~~cpp
class Fecha{
    private:
        int mes;
        int dia;
        int anio;
    public:
        Fecha(int = 7, int = 4, int = 2005); // constructor
        Fecha(long);// constructor sobrecargado
        void mostrarFecha(); // función miembro para desplegar una fecha
};
/*
    Implementación de la funciones
*/
~~~

**`Nota:`** Si ambos constructores tuvieran valores por omisión, ocurría un error de compilador.

#### 4.2 Constructores en línea

~~~cpp
class Fecha {
    private:
        int mes;
        int dia;
        int anio;
    public:
        /*
            La palabra clave en linea no se requiere en esta 
            declaración debido a que las funciones definidas 
            dentro de class son consideradas en linea por omisión
        */
        Fecha(int mm = 7, int dd = 4, int aaaa = 2005){
            mes = mm;
            dia = dd;
            anio = aaaa;
        }
        Fecha(long aaaammdd){
            anio = int(aaaammdd/10000.0); // extrae el anio
            mes = int( (aaaammdd – anio * 10000.0)/100.00 ); // extrae el mes
            dia = int(aaaammdd – anio * 10000.0 – mes * 100.0); // extrae el dia
        }
};
~~~

Otra forma de escribir la función Fecha(int mm = 7, int dd = 4, int aaaa = 2005) es:

~~~cpp
        Fecha(int mm = 7, int dd = 4, int aaaa = 2005)
        {mes = mm; dia = dd; anio = aaaa;}
~~~

### 5. Sobrecarga de operadores por asignación (no es escencial)

El operador `=` en C++ se utiliza para asignar los valores de un objeto a otro objeto del mismo tipo. Sobrecargar el operador de asignación `=` permite definir un comportamiento personalizado para esta operación cuando se trabaja con objetos de una clase. La sobrecarga de `operator=` es especialmente importante en las siguientes situaciones:

> void operator=(Nombre_Clase&) // Declaración dentro de la clase

> Nombre_Clase& operator=(const Nombre_Clase& nueva_Clase)

Beneficios de Sobrecargar `operator=`:

- **Gestión Correcta de Recursos**: Asegura que los recursos dinámicos se copien y liberen correctamente.

- **Evita Autoasignación**: Protege contra problemas que pueden surgir si un objeto se asigna a sí mismo.

- **Permite Encadenamiento**: Facilita el encadenamiento de múltiples asignaciones.

- **Personalización del Comportamiento**: Permite definir un comportamiento específico para la operación de asignación según las necesidades de la clase.

En resumen, la sobrecarga del operador de asignación `=` es una herramienta poderosa en C++ que permite un control preciso sobre cómo se copian los objetos, especialmente cuando se manejan recursos dinámicos.

~~~cpp
void Fecha::operator=(Fecha& fechanueva){
    dia = fechanueva.dia;
    mes = fechanueva.mes;
    anio = fechanueva.anio;
}
~~~

**`Nota:`** Para evitar cualquier alteración al objeto usado en el lado derecho de la asignación, se deberá usar un **argumento de referencia constante**.

Se podría decir que a.operator=(b) y a = b (siendo a y b de tipo clases Fechas) son equivalentes cuando se ha sobrecargado el operador de asignación = en la clase Fecha. La segunda forma (a = b) es simplemente azúcar sintáctica para la primera y es la manera estándar y más legible de utilizar el operador de asignación en C+

### 6. Constructores de copia

En C++ ocurre una inicilización cada vez que se crea un objeto nuevo. En una asignación no se crea un objeto nuevo, tan solo se cambia el valor de un objeto existente.

Formas de inicilizar un objeto;

> Fecha b = a;

> Fecha b(a);

El compilador ejecuta un constructor de copia por omisión, si no se ha declarado uno antes. 

Ejemplo de un constructor copia:

~~~cpp
Fecha::Fecha(const Fecha& fechavieja){
    dia = fechavieja.dia;
    mes = fechavieja.mes;
    anio = fechavieja.anio;
}
~~~

### 7. Inicialización base/miembro

La siguiente declaración del constructor fecha

~~~cpp
Fecha::Fecha(int mes, int dia, int anio){
    mes=mes;
    dia=dia;
    anio=anio;
}
~~~

es equivalente a:

~~~cpp
Fecha::Fecha(int me, int da, int ao) : mes(me), dia(da), anio(ao) {}
~~~

La línea `Fecha::Fecha(int me, int da, int ao) : mes(me), dia(da), anio(ao) {}` es una definición de un constructor para la clase `Fecha`. Esta línea utiliza una lista de inicialización de miembros para inicializar los atributos de la clase `mes`, `dia`, y `anio` con los valores proporcionados en los parámetros `me`, `da`, y `ao` respectivamente.

##### Desglose de la Sintaxis

```cpp
Fecha::Fecha(int me, int da, int ao) : mes(me), dia(da), anio(ao) {}
```

1. **Fecha::Fecha**: Define un constructor para la clase `Fecha`.

2. **(int me, int da, int ao)**: Especifica que el constructor toma tres parámetros enteros: `me`, `da`, y `ao`.

3. **: mes(me), dia(da), anio(ao)**: Es la lista de inicialización de miembros. Inicializa los atributos `mes`, `dia`, y `anio` de la clase con los valores de los parámetros `me`, `da`, y `ao`, respectivamente.

4. **{}**: Cuerpo vacío del constructor. Si no necesitas realizar ninguna operación adicional en el constructor más allá de la inicialización, el cuerpo puede estar vacío.

##### Beneficios de Usar la Lista de Inicialización de Miembros

- **Eficiencia**: Inicializa los miembros directamente, lo que puede ser más eficiente que asignarles valores en el cuerpo del constructor.

- **Constantes y Referencias**: Permite inicializar miembros que son constantes o referencias, los cuales no pueden ser asignados en el cuerpo del constructor.

- **Orden de Inicialización**: Garantiza que los miembros se inicialicen en el orden en que están declarados en la clase, no en el orden en que aparecen en la lista de inicialización.

Usar la lista de inicialización de miembros es una práctica recomendada en C++ para asegurar la correcta y eficiente inicialización de los miembros de la clase.

## C) Características adicionales de una clase

### 1. Alcance de la clase

- **Variable locales:** Como se vio, el alcance de una variable define la porción de un  programa en la cual puede haber acceso a la variable. Para variables locales, este alcance es definido por cualquier bloque contenido dentro de un par de llaves, {}. 

`Nota:` Todos los parámetros de una función se consideran como variablevs locales.

- **Variables globales:** Son accesibles a través del archivo que los contiene, con tres exepciones:

    **a)** Si una variable local tiene el mismo nombre de una variable global, sólo puede haber acceso a la variable global dentro del alcance de la variable local usando el operador de resolución de alcance, ::.
    
    **b)** El alcance de una variable global puede extenderse a otro archivo usando la palabra clave **extern**,

    **c)** El mismo nombre global puede reutilizarse en otro archivo para definir una variable separada y distinta usando la palabra clave **static**.

    `Nota:` Las variables globales static son desconocidas fuera de su archivo inmediato.

~~~cpp
double tasa; // global

// declaración de la clase
class Prueba{
    private:
        double cantidad, precio, total; // alcance de la clase
    public:
        double extend(double, double) // alcance de la clase
}

// 

double Prueba::extend(double cant, double pr){
    cantidad = cant;
    precio = pr;
    total = tasa * cantidad * precio;
}
~~~

Visualización gráfica de los alcances en los códigos.

![img](img/clase_alcance.png)



### 2. Miembro de clase tipo static

Conforme se crea cada objeto de clase obtiene su propio bloque de  memoria para sus miembros de datos. En algunos casos, sin embargo, es conveniente para cada instanciación de una clase compartir la misma ubicación de memoria para una variable específica.

Los miembros de datos de la clase **static** comparten el mismo espacio de almacenamiento para todos los objetos de la clase; como tales, actúan como variables globales para la clase y proporcionan un medio de comunicación entre objetos.
C++ requiere que dichas variables static **sean declaradas dentro de la sección de declaración de la clase**.

- static en clases: Define miembros compartidos entre todas las instancias.

- static en funciones: Variables que retienen su valor entre llamadas a la función.

- Permite una única instancia compartida y persistencia de datos a lo largo del tiempo.

#### Conceptos Clave

 **Atributos `static` en una clase**:
   - Pertenece a la clase y no a las instancias individuales.
   - Una sola copia es compartida por todas las instancias.

 **Métodos `static` en una clase**:
   - Pueden ser llamados sin crear una instancia de la clase.
   - No pueden acceder a variables de instancia no estáticas directamente.

**Variables locales `static` en funciones**:
   - Mantienen su valor entre llamadas a la función.
   - Se inicializan solo una vez.

~~~cpp
class Empleado{
    private:
        static double tasa_imp;
        int num_id;
    public:
        Empleado(int); // constructor
        void desplegar();
}

/*
    La definición e inicialización de la variable static tasa_imp se logra usando una instrucción como la siguiente:
*/
double Empleado::tasa_imp = 0.07; // con esto se define tasa_imp
/*
    Aquí se usa el operador de resolución de alcance, ::, para 
    identificar tasa_imp como miembro de la clase Empleado y no se 
    incluye la palabra clave static.
*/
~~~

Aunque podría parecer que la inicialización de tasa_imp es global, no lo es. Una vez que se hace la definición, cualquier otra definición producirá un error. Por tanto, la definición real de un miembro static sigue siendo responsabilidad del creador de la clase.

Además de los miembros de datos static, también pueden crearse funciones miembro static. Dichas funciones se aplican a las clases en conjunto en lugar de a los objetos de clase individuales  y sólo pueden tener acceso a los miembros de datos static y otras  funciones miembro static de la clase


### 3. Funciones Amigas 

Las funciones amigas no son miembro de las clases pero igual pueden acceder a los datos protegidos, públicos y privados de dicha clase. 

Las clases mantienen su propia lista aprobada de funciones no miembros a las que se conceden los mismos privilegios que a las funciones de una clase. Las funciones no miembros en la lista se llaman **funciones amigas** y la lista se conoce como **lista de amigos**.

> friend double agre_real(Complejo&, Complejo&);

## D) Funciones operador

```markdown
| Operador | Descripción |
|----------|-------------|
| ()       | Llamada a una función |
| []       | Elemento de una matriz |
| ->       | Referencia de apuntador a un miembro de una estructura |
| new      | Memoria asignada dinámicamente |
| delete   | Memoria desasignada dinámicamente |
| ++       | Incremento |
| --       | Decremento |
| -        | Menos unario |
| !        | Negación lógica |
| ~        | Complemento a uno |
| *        | Indirección |
| *        | Multiplicación |
| /        | División |
| %        | Módulo (residuo) |
| +        | Adición |
| -        | Sustracción |
| <<       | Cambio a la izquierda |
| >>       | Cambio a la derecha |
| <        | Menor que |
| <=       | Menor que o igual a |
| >        | Mayor que |
| >=       | Mayor que o igual a |
| ==       | Igual a |
| !=       | Diferente a |
| &&       | AND lógico |
| \|\|     | OR lógico |
| &        | AND bit por bit |
| ^        | OR exclusivo bit por bit |
| \|       | OR inclusivo bit por bit |
| =        | Asignación |
| +=       | Asignación |
| -=       | Asignación |
| *=       | Asignación |
| /=       | Asignación |
| %=       | Asignación |
| &=       | Asignación |
| ^=       | Asignación |
| \|=      | Asignación |
| <<=      | Asignación |
| >>=      | Asignación |
| ,        | Coma |
```

Para diseñar una clase `Fecha` en C++ de manera que soporte una variedad de operaciones, puedes sobrecargar varios operadores. 

Ejemplos de uso

#### a. Operadores aritméticos

- **`operator+` y `operator-`**: Para sumar y restar días a una fecha.
    ```cpp
    Fecha operator+(int dias);
    Fecha operator-(int dias);
    ```

#### b. Operadores de comparación

- **`operator==` y `operator!=`**: Para verificar si dos fechas son iguales o diferentes.
    ```cpp
    bool operator==(const Fecha& otra) const;
    bool operator!=(const Fecha& otra) const;
    ```

- **`operator<`, `operator<=`, `operator>` y `operator>=`**: Para comparar dos fechas.
    ```cpp
    bool operator<(const Fecha& otra) const;
    bool operator<=(const Fecha& otra) const;
    bool operator>(const Fecha& otra) const;
    bool operator>=(const Fecha& otra) const;
    ```

#### c. Operadores de asignación

- **`operator=`**: Para asignar una fecha a otra.
    ```cpp
    Fecha& operator=(const Fecha& otra);
    ```

#### d. Operadores de incremento y decremento

- **`operator++` y `operator--`**: Para incrementar o decrementar un día.
    ```cpp
    Fecha& operator++(); // Pre-incremento
    Fecha operator++(int); // Post-incremento
    Fecha& operator--(); // Pre-decremento
    Fecha operator--(int); // Post-decremento
    ```

#### e. Operadores de entrada y salida

- **`operator<<` y `operator>>`**: Para imprimir y leer fechas utilizando streams.
    ```cpp
    friend std::ostream& operator<<(std::ostream& os, const Fecha& fecha);
    friend std::istream& operator>>(std::istream& is, Fecha& fecha);
    ```

    

### 1. Funciones operador como amigas pag(565)
## E) Conversión del tipo de datos
### 1. Conversión de integrado a integrado
### 2. Conversión de integrado a clase
### 3. Conversión clase a integrado
### 4. Conversión clase a clase


## F) Herencia

La herencia es la capacidad de derivar una clase a partir de otra. La clase inicial usada como base para la clase derivada se conoce como base, padre o superclase. La clase derivada se conoce como derivada, hija o subclase. 

Una clase derivada tiene la misma forma que cualquier otra clase. La única diferencia está en la primera línea de la sección de declaración. Para una clase derivada, esta línea se extiende:

> clase Nombre_Clase_derivada : tipo_accesoClase Nombre_Clase_Base

~~~cpp
// Clase padre
class Persona {
    // Atributos
    string nombre;
    int edad;

    // Métodos
    public:
        void saludar() {
        cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
        }
};

// Clase hijo

class Estudiante : public Persona {
    // Atributos
    string carrera;

    // Métodos
    public:
        void estudiar() {
        cout << "Estoy estudiando " << carrera << "." << endl;
        }
};
~~~

Por lo que la implementación en el main sería:

~~~Cpp
int main() {
    Estudiante estudiante1;

    // Notar que nombre y edad se crearon en la clase persona
    // pero aun asi pertenecen/son accesibles desde clase estudiante
    estudiante1.nombre = "María López";
    estudiante1.edad = 25;
    estudiante1.carrera = "Ingeniería Informática";

    estudiante1.saludar();
    estudiante1.estudiar();

    return 0;
}
~~~

### 1. Clase heredades en cadena o Herencia multiescalar

~~~cpp
class Base {
public:
    void baseMethod() {
        // Método de la clase base
    }
};

class Derived1 : public Base {
public:
    void derived1Method() {
        // Método de la primera clase derivada
    }
};

class Derived2 : public Derived1 {
public:
    void derived2Method() {
        // Método de la segunda clase derivada
    }
};

// Y así sucesivamente...
~~~

### 2. Especificaciones de acceso

Tomando en cuenta la primer linea a la hora de realizar el llamado de la clase derivada:

> clase Nombre_Clase_derivada : tipo_accesoClase Nombre_Clase_Base

dependiendo del tipo **accesoClase (private, public, protected)** que corresponda a la clase a derivar, los miembros de la clase derivada pueden ser o no accesibles (observar la tabla).

```markdown
| Miembro de la clase base | Acceso de la clase derivada | Miembro de la clase derivada |
|--------------------------|-----------------------------|------------------------------|
| private    ------------> : private        ------------>  inaccesible                  |
| protected  ------------> : private        ------------>  privado                      |
| public     ------------> : private        ------------>  privado                      |
|---------------------------------------------------------------------------------------|
| private    ------------> : public         ------------>  inaccesible                  |
| protected  ------------> : public         ------------>  protegido                    |
| public     ------------> : public         ------------>  público                      |
| --------------------------------------------------------------------------------------|
| private    ------------> : protected      ------------>  inaccesible                  |
| protected  ------------> : protected      ------------>  protegido                    |
| public     ------------> : protected      ------------>  protegido                    |

```
En el contexto de la programación orientada a objetos, especialmente en C++, los términos `public`, `private` y `protected` se refieren a especificadores de acceso. Estos especificadores determinan la visibilidad y accesibilidad de los miembros (atributos y métodos) de una clase.

#### Public (`public`)

- **Descripción**: Los miembros declarados como `public` son accesibles desde cualquier lugar del programa.

- **Visibilidad**: No hay restricciones; cualquier otra clase u objeto puede acceder a estos miembros.

- **Uso común**: Se utiliza para definir la interfaz pública de una clase, es decir, las funciones y atributos que están disponibles para el usuario de la clase.

#### Private (`private`)

- **Descripción**: Los miembros declarados como `private` solo son accesibles desde dentro de la propia clase en la que están declarados.

- **Visibilidad**: Ninguna otra clase ni objeto puede acceder a estos miembros directamente, ni siquiera las clases derivadas.

- **Uso común**: Se utiliza para encapsular datos y funciones que no deben ser accesibles desde fuera de la clase. Esto es fundamental para el principio de encapsulamiento en la programación orientada a objetos.

#### Protected (`protected`)

- **Descripción**: Los miembros declarados como `protected` son accesibles desde dentro de la propia clase y desde las clases derivadas, pero no desde otros lugares.

- **Visibilidad**: Las clases derivadas pueden acceder a estos miembros, pero no los objetos ni otras clases externas.

- **Uso común**: Se utiliza para permitir que las clases derivadas accedan a ciertos datos y funciones que no están destinados a ser accesibles para otros elementos del programa.

#### Ejemplo de Uso en Herencia

```cpp
class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

class Derived : public Base {
public:
    void accessMembers() {
        publicVar = 1;        // Acceso permitido
        protectedVar = 2;     // Acceso permitido
        privateVar = 3;       // Error: no se puede acceder a miembros privados de la clase base
    }
};
```

En este ejemplo:
- `Derived` puede acceder a `publicVar` porque es `public`.
- `Derived` puede acceder a `protectedVar` porque es `protected`.
- `Derived` no puede acceder a `privateVar` porque es `private`.

#### Resumen

- **`public`**: Accesible desde cualquier lugar.
- **`private`**: Accesible solo dentro de la clase en la que se declara.
- **`protected`**: Accesible dentro de la clase en la que se declara y en las clases derivadas.

## G) Polimorfismo

En C++, el polimorfismo se refiere a la capacidad de diferentes objetos de una jerarquía de clases (o tipos) de responder a las mismas llamadas a métodos de manera diferente. Esto se logra a través de dos mecanismos principales: el polimorfismo de subtipos (o polimorfismo basado en herencia) y el polimorfismo paramétrico.

### 1. Polimorfismo de subtipos (herencia):
   - Permite que objetos de clases derivadas se comporten como objetos de su clase base. Esto significa que una función definida en la clase base puede ser sobrescrita en las clases derivadas con su propia implementación. **Cuando se llama a esa función a través de un puntero o referencia a la clase base**, el compilador selecciona la implementación correcta basándose en el tipo real del objeto en tiempo de ejecución.
   
   - Ejemplo:
     ```cpp
     class Animal {
     public:
         virtual void hacerSonido() const {
             std::cout << "Animal hace sonido indeterminado" << std::endl;
         }
     };

     class Perro : public Animal {
     public:
         void hacerSonido() const override {
             std::cout << "Guau!" << std::endl;
         }
     };

     class Gato : public Animal {
     public:
         void hacerSonido() const override {
             std::cout << "Miau!" << std::endl;
         }
     };

     int main() {
         Perro perro;
         Gato gato;

         Animal *animal1 = &perro;
         Animal *animal2 = &gato;

         animal1->hacerSonido(); // Salida: Guau!
         animal2->hacerSonido(); // Salida: Miau!

         return 0;
     }
     ```
   - En este ejemplo, `Animal` es la clase base con un método  virtual `hacerSonido()`, y `Perro` y `Gato` son clases derivadas que sobrescriben este método. Cuando se llama a `hacerSonido()` a través de punteros `Animal`, la implementación específica de cada clase derivada es utilizada.

### 2. Polimorfismo paramétrico:
   
   - Es implementado mediante plantillas (templates) en C++. Permite escribir código que actúa de manera genérica sobre diferentes tipos de datos, sin saber de antemano qué tipo se va a utilizar. Esto se logra utilizando parámetros de plantilla.
   
   - Ejemplo:
   
     ```cpp
     template <typename T>
     T suma(T a, T b) {
         return a + b;
     }

     int main() {
         int resultado1 = suma(5, 3); // resultado1 es 8
         double resultado2 = suma(2.5, 3.7); // resultado2 es 6.2

         return 0;
     }
     ```
   
   - En este caso, la función `suma` es paramétrica y puede ser utilizada con diferentes tipos (`int`, `double`, etc.) sin necesidad de definir versiones separadas para cada tipo.

El polimorfismo en C++ es una característica fundamental que permite escribir código más flexible y reusable, haciendo que los programas puedan manejar objetos de diferentes tipos de manera más eficiente y elegante.