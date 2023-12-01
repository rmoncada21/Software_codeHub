# Registros y Estructuras

***
## Problema de la mediana sin conocer la cantidad de datos
- arreglo dinamico (no el que se aloja en la memoria dinamica)
 
- para crear el arreglo dinamico se necesita:
size
***
## Concepto de registro de memoria. Declaración de tipos de registros en C (structs)
~~~
typedef struct array{
    int datos;
}array;
~~~

***
## Tamaño en bytes de un registro. Alineamiento de palabra (world alignment). Relleno (padding)

 
***
## Los registros son valores, no direcciones. Subrutinas que modifican registros

 
***
## Acceso a los campos de un registro (operador .). Violación de encapsulación

 
***
## Interfaz del arreglo dinámico para resolver el problema de la mediana. Acceso a los campos de un registro a través de un puntero (operador ->)
>(*lista).valor
lista->valor
 
***
## Implementación del arreglo dinámico (inicio). Supuestos (assert)

 
***
## Inicialización del arreglo dinámico. Rastreo de memoria

 
***
## Agregar un elemento al arreglo dinámico: versión con error por desborde

 
***
## Encontrar error con análisis dinámico de código: Address Sanitizer
VER ACA ----------------------------------------------------------
 
***
## Incrementar la capacidad del arreglo

 
***
## Implementación del incremento de capacitdy

 
***
## Detectar fuga de memoria con MemCheck de Valgrind

 
***
## Implementación de array_uninit() y corregir la fuga de memoria

 
***
## Preguntas. Reusar arreglos dinámicos en C
