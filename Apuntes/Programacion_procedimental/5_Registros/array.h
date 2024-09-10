#ifndef ARRAY_H
#define ARRAY_H

/**
 * @brief 
 * 
 */

 // no se puede inicializar nada desde acá
 // solo se define el tipo de datos
struct array {
  /**
   * @brief 
   * 
   */
  size_t count;     // 8 [1000, 1008[
  size_t capacity;  // 8 [1016, 1024[
  double* elements; // 8 [1024, 1032[]
}; // sizeof(struct array) == 32

/*
  short dirty;      // 2 [1008, 1010[
  char padding1[6]; // 6 [1010, 1016[  word alignment
*/

typedef struct array array_t;

// basicamente como un construcot en JAVA
// el puntero para alterar el original

int array_init(struct array* array);
int array_uninit(struct array* array);
int array_append(struct array* array, const double element);

#endif  // ARRAY_H

/*
Arreglo (vector): region continua de memoria que almacena valores del
mismo tipo

Registro de memoria (record/struct): region continua de memoria que puede almacenar
valores (campos) de diferente tipo. No es Registro de CPU (register)

Subrutina: region continua de memoria que almacena instrucciones que pueden ser
ejecutadas (invocadas, llamadas)
*/