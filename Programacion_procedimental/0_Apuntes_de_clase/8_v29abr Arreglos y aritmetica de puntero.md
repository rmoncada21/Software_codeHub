# Análisis del problema de la mediana

## Diseño de la solución en pseudocódigo
~~~
  procedure main:
  Read value count 
  Read values as a array of value conu of real numbers
  Sort values
  Creat meddias as the result of calculte the median of values
  Print median 
  
function calculate the median of values
  if value  count is odd the 
    return value at the ecnter of values
  else
    return the value 
~~~


## Tipo de datos size_t. Programación defensiva
- size_t se define dentro del enxabezado #include **<stdio.h>**

-Programación defensiva:
>enum error_t error = ERROR_SUCCESS;

archivo para reportar erros se usa fprintf(stderr, "menssaje de error")
mensaje de error = median:error: no se puede leer el valor

**enum** define un nuevo tipo de datos


C enumera los valores automaticamente
**Exit succes tiene un valor de cero**, se agrega con la libreria de **stdlib.h**


## Manejo de errores en C. Constantes en C. Enumeraciones

## Error: retornar dirección de una variable

**No se puede** devolver un vector como retorno de una funcion pero se puede retornar la primera dirección de memoria del vector. Tener cuiddo ya que se puede enviar la dirección de memoria de algo que se va destruir


## Tipos de asignación de memoria: código, estática, automática, y dinámica. Inicialización de arreglos
https://jeisson.ecci.ucr.ac.cr/progra2/material/#arrays
ver sección de 1.5.2 Arreglos vectores

- Hacer un vector constante hace que el compilador lo ponga en el segmento de código 

- Se define como una variables global o estatica para que vaya al Segmento de datos,
preferiblemente hacer la variable static

- Una variable static es que el linker la pone en ell segmento de datos y deja de estar en 
la subrutina. Usarlas con cuidado

- O usar el heap segmento con calloc, malloc, se pide con new en JAVA y C++



## Pasar arreglos por parámetro

~~~
void read_values(const size_t value_count, double values[values_count]){
  for (size_t index = 0; index < value_count; ++index)
    if (scanf("%lg, &values[index]")=!1)
      return ERROR_READ_VALUES
}
~~~


## C pasa y retorna los arreglos como punteros, nunca por copia. size_of de un arreglo.
No se puede retornar ni recibir multiples valores
Por 


## Indexación de arreglos a través de punteros
- Un puntero siempre tiene el tamaño de la arquitectura
- puntero[1]: posición uno del puntero. 


## Aritmética de punteros.
Puntero son enteros sin signo
>double* pointer = arr; 

>pointer + 1 == 108
100     + 1*sizeof(double)
100     + 8
108

Ambas expresiones hacen lo mismo
&values[index] usar la siguiente expresion values + index

arr[2] == 90.0       *(pointer + 2) == 90.0

## Desreferenciar con aritmética de punteros. Cambiarle la dirección al puntero

arr[0] == 95.0       *(pointer + 0) == 95.0    *pointer == 95.0


Esto se usa mas en variables tipos char
pointer = pointer + 1 ; le asigna la direccción de memoria de la direccion 
pointer+= 1
++pointer
pointer++

EL compilador tiene una herramiento de optimizacion 
## Ordenar un arreglo. Punteros void*. Punteros a funciones (subrutinas)

funcion qsort:
>qsort(void* base, size_t num, size_t size, int (*compar), const void*, const void*)

void* es un puntero


(const double*)p1 : apunta a un double asterisco (se le conoce como cast) 


## Terminar la implementación de la mediana y ejecución de la values es un vector


## Datos apuntados constantes (sólo lectura). Direcciones constantes
>double* values
si la subrutina recibe double* values quiere decir que la subrutina va cambiar los 
valores del vector

>const double* const values


## Preguntas: Matrices. Arreglos terminados en nulo. Concuso de código ofuscado en C
Las matrices son punteros  punteros
