# Registros y Estructuras


## 1. Problema de la mediana sin conocer la cantidad de datos
- arreglo dinamico (no el que se aloja en la memoria dinamica)
 
- para crear el arreglo dinamico se necesita:
size

## 2. Concepto de registro de memoria. Declaración de tipos de registros en C (structs)
~~~
    
    typedef struct array{
        int datos;
    }array;

~~~


## 3. Tamaño en bytes de un registro. Alineamiento de palabra (world alignment). Relleno (padding)



## 4. Los registros son valores, no direcciones. Subrutinas que modifican registros

 

## 5. Acceso a los campos de un registro (operador .). Violación de encapsulación

 

## Interfaz del arreglo dinámico para resolver el problema de la mediana. Acceso a los campos de un registro a través de un puntero (operador ->)
>(*lista).valor
lista->valor
 

## 6. Implementación del arreglo dinámico (inicio). Supuestos (assert)

 

## 7. Inicialización del arreglo dinámico. Rastreo de memoria

 

## 8. Agregar un elemento al arreglo dinámico: versión con error por desborde

 

## 9. Encontrar error con análisis dinámico de código: Address Sanitizer
VER ACA ----------------------------------------------------------
 

## 9. Incrementar la capacidad del arreglo

 

## 10. Implementación del incremento de capacitdy

 

## 11. Detectar fuga de memoria con MemCheck de Valgrind

 

## 12. Implementación de array_uninit() y corregir la fuga de memoria

 

## 13. Preguntas. Reusar arreglos dinámicos en C
