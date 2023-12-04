# Memoria dinámica y matrices

## 1. Repaso: solución al problema de la mediana
- Todos los arreglos, C los pasa como punteros


## 2. Google Sanitizers. Instrumentalización (-f) de código. Address Sanitizer.
- Cpplint Herramienta de analisis dinámico de código
- Estan los Adress sanitizer y el memory sanitizers pero se usa el Addres sanitizer preferiblemente

- hay que agregar lo siguiente al comando de compilación
    - EL parametro -f se llama instrumentalización
    - El analisis estático revisa en el programa en su cófigo fuente
>-fsanitize=adress



## 3. Vulnerabilidad por desbordamiento de pila (stack overflow)
- Una vulnerabilidad puede ser el que el us
- Heap memory, memoria dinámica.
- Segmentation fault; se salió del segmento de memoria

## 3. Alojamiento dinámico de memoria. malloc().
- Lo mejor es alojar un vector en la memoria dinámica. 
Esto se hace con la función de malloc, calloc, realloc
    - La funcion malloc retorna la direccion de memoria en donde empieza tl tamaño del arreglo
    - Se le tiene que hacer un cast 
    - Ver las referencias de malloc en la pgina de c++
    - Se tiene que eliminar la memoria con free

> void* malloc (size_t size)

- incluir la bibliotec #include <stdlib.h> 
- El double antes de malloc, es un cast para cambiar el tipo de datos entregaddo por malloc
> double* values = (double*) malloc(value_count * sizeof(double));



## 4. Reaccionar al fallo de alojamiento dinámico. Dirección cero o nula (NULL)
- Malloc busca memoria de la memoria RAM


## 5. Concepto de fuga de memoria
- LIberar la memoria 


## 6. Corregir la fuga de memoria. Subrutina free().
- LIberar la memoria a penas se deje de usar 

- Pasos a seguir:

    - 1 crear vector
    - 2 verificar si se consiiguió la memoria 
    - 3 liberar
    - 4 Estos tres para pII
    - 5 Probar por separada
    - 6 asan: accesos inválidos y fugas 
    - 7 msan: memoria no incializada
    - 8 ubsan: inconsistencias
    - 9 tsan: threads

## 7. Matrices de tamaño constante
- Calloc para hacer matrices 
- Inicializa las variables
- Calloc es mas eficientes pero malloc es mas seguro


>double* values = (double*) calloc(value_count , sizeof(double));

## 8. Crear una matriz en memoria dinámica (heap). calloc()
- NO crear matriz dinámica en el segmento de pila
>double matrix[filas][columnas] =

- Las matrices on vectores en la máquina.

> double**   

- Se crea un primer vector con las direcciones de memoria de otros vectores
Usar un parentesis de mas sirve para dar una asginación válida del código


>((matrix[row] = calloc(cols, sizeof(double)))


## 9. Destruir/liberar una matriz de la memoria dinámica


## 10 Subrutinas genéricas para crear y destruir matrices con void**
- siempre hacer el cast con matrices, con vecors

- mejor no poner const en matrices 
s