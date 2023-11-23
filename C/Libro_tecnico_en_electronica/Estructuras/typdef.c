#include <stdio.h>


struct nuevo{
    int a;
    int b;

};

typedef struct nuevo forma_type;

// Definir un alias para un puntero a función que toma dos enteros y devuelve un entero
typedef int (*Operacion)(int, int);

// Función suma
int suma(int a, int b) {
    return a + b;
}

// Función resta
int resta(int a, int b) {
    return a - b;
}

int main() {

    forma_type nueva_struct;
    
    Operacion operador;

    operador = suma;
    printf("Suma: %d\n", operador(5, 3));

    operador = resta;
    printf("Resta: %d\n", operador(5, 3));

    return 0;
}
// En estos ejemplos, `typedef` se utiliza para crear alias para tipos de datos existentes, estructuras y punteros a funciones, haciendo que el código sea más legible y fácil de entender.
