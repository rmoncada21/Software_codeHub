# Memoria dinámica y matrices

#### Repaso: solución al problema de la mediana
Todos los arreglos, C los pasa como punteros


#### Google Sanitizers. Instrumentalización (-f) de código. Address Sanitizer.
- Cpplint Herramienta de analisis dinámico de código
- Estan los Adress sanitizer y el memory sanitizers pero se usa el Addres sanitizer preferiblemente

hay que agregar -fsanitize=adress al comando de compilación

EL parametro -f se llama instrumentalización

El analisis estático revisa en el programa en su cófigo fuente


#### Vulnerabilidad por desbordamiento de pila (stack overflow)
Una vulnerabilidad puede ser el que el us
Heap memory, memoria dinámica.
Segmentation fault; se salió del segmento de memoria

#### Alojamiento dinámico de memoria. malloc().
Lo mejor es alojar un vector en la memoria dinámica. 
Esto se hace con la función de amllo, calloc, realloc

void* malloc (size_t size)
retorna la direccion de memoria en donde empieza tl tamaño del arreglo
SSe le tiene que hacer un cast 
Ver las referencias de malloc en la pgina de c++
Se tiene que eliminar la memoria con free

incluir la bibliotec #include <stdlib.h> 

double* values = (double*) malloc(value_count * sizeof(double));

el dpuble antes de malloc, es un cast para cambiar el tipo de datos entregaddo por malloc



#### Reaccionar al fallo de alojamiento dinámico. Dirección cero o nula (NULL)
Malloc busca memoria de la memoria RAM


#### Concepto de fuga de memoria
LIberar la memoria 


#### Corregir la fuga de memoria. Subrutina free().
LIberar la memoria a penas se deje de usar 


crear vector
verificar si se consiiguió la memoria 
liberar
Estos tres para pII
Probar por separada
asan: accesos inválidos y fugas 
msan: memoria no incializada
ubsan: inconsistencias
-----
tsan: threads

#### Matrices de tamaño constante
Calloc para hacer matrices 
Inicializa las variables
Calloc es mas eficientes pero malloc es mas seguro


double* values = (double*) calloc(value_count , sizeof(double));

#### Crear una matriz en memoria dinámica (heap). calloc()
double matrix[filas][columnas] =
NO crear matriz dinámica en el segmento de pila


Las matrices on vectores en la máquina.

double**   

se crea un primer vector con las direcciones de memoria de otros vectores


((matrix[row] = calloc(cols, sizeof(double)))

usar un parentesis de mas sirve para dar una asginación válida del código


return opcion1, 
#### Destruir/liberar una matriz de la memoria dinámica



#### Subrutinas genéricas para crear y destruir matrices con void**
siempre hacer el cast con matrices, con vecors

mejor no poner const en matrices 
