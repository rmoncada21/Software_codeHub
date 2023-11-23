#include <stdio.h>
#include <string.h>

void funcion(int *puntero) {
    // Hacer algo con el puntero, por ejemplo, modificar el valor al que apunta.
    *puntero = 42;
}

int main() {
    int variable = 10;
    int *puntero = &variable;

    printf("Antes de llamar a la función: %d\n", variable);

    // Llamando a la función con el puntero como argumento
    funcion(puntero);

    printf("Después de llamar a la función: %d\n", variable);

    return 0;
}
