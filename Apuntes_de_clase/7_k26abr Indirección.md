# Análisis del problema del rango 1h 07min
***
#### Cargado del programa. Segmentos de memoria. Segmento de código (texto)
Rastreo de memoria
Estudio del programa en tiempo de ejecuación
Hay cuatro secciones de memoria:
1. Sección de código o segmento de código: código escrito por el programador
2. Segemento de datos: contiene la variables globales y estaticas
3. Segemento de memoria dinamica HEAP
4. Segmento de pila STACK: alojar las invoccaciones de las subrutinas. Se crea una pila por cada hilo de ejecución

***
#### Segmento de datos. Variables globales y estáticas
#### Segmento de heap (memoria dinámica). Hilo de ejecución
#### Invocación de subrutinas. Parámetros vs argumentos
https://jeisson.ecci.ucr.ac.cr/progra2/2022a/lecciones/0426-indirection/subroutine_call-parameters_vs_arguments.mp4

Los argumentos y los parametros son distintos

>swap(argumento1, argumento2)
swap(int parametro1, int parametro2)

>**NOTA: No usar variables Globales**

***
#### Llamado por copia (copia de los argumentos)
***
#### Variables vs punteros. Metáfora de puntero
https://jeisson.ecci.ucr.ac.cr/progra2/2022a/lecciones/0426-indirection/variables_vs_pointers-pointer_metaphors.mp4

- Variables: nombres de la variable. tamaño, dirección de memoria
- Puntero: es una variable "entera" con una caracteristica distinta
- El puntero guarda el valor ademas de irse a la dirección de la memoria

~~~
int variable = 15; se accede al valor de la variable
&variable = se obtiene la dirección de memoria de la variable

int* puntero = 15; se hace bloque tipo de puntero de 64 bits tipo entero para almacenar el valor de 15
int* puntero = &variable;

tipo_de_datos* puntero = &variable;

*puntero; desreferenciar
~~~

***
####  "Desreferenciar" un puntero (obtener el valor apuntado)
https://jeisson.ecci.ucr.ac.cr/progra2/2022a/lecciones/0426-indirection/pointer_desreferencing.mp4

~~~
| var                      |        | puntero                         |   
| 102    103   104   105   |   107  | 108    109   ...   115    116   |   
|--------------------------|--------|-------------------------------- | 
|      |     |     | 1111  |        |      |     |     | 102   |      | 
|--------------------------|--------|-------------------------------- |
|                          |        |  


int var = 15;                   var==15               puntero == 102
int* puntero = &var;            &var = 102            &puntero == 108;
                                                      *puntero == 15
                                                      
int* puntero = (double*)&var; obliga al compilador a interpretr un valor de double                                                      

Hacer diagramas ayuda a entender mejor las variables punteros y debugs
~~~

***
#### Corregir con punteros la implementación del problema del rango

***
#### Rastreo de memoria de la implementación con punteros
https://jeisson.ecci.ucr.ac.cr/progra2/2022a/lecciones/0426-indirection/tracing_memory_of_solution_with_pointers.mp4

Para meterse en la memoria de las variables de otras subrutinas se usan punteros 


***
#### Enteros sin signo del tamaño de la arquitectura (size_t). Arreglos de tamaño fijo de alojamiento automático

> size_t es un tamaño de variable cambiante
 // se usa z cuando se usa size_t 


***
#### Arreglos de alojamiento estático. Argumentos de línea de comando. Arreglos de longitud variable

Todas las variables static, el compilador las trata como variables globales 

***
#### Vulnerabilidad por desborde de pila
Segmentation fault: error de seguridad, vulnerabilidad


***
#### Arreglo de alojamiento dinámico (en segmento de heap)
Los arreglos de longitud variable deben estar en la memoria dinamica
En c existen 3 surbrutinas que estan en la bibliotec #include <stdlib.h>
- malloc
- calloc // el que mas se va usar, retorna u puntero
- realloc

Crear arreglos en la memoria dinamica
