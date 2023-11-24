#include <stdio.h>
#include <stdlib.h>

void modificarPuntero(int** puntero) {
    *puntero = (int*)malloc(sizeof(int));
    **puntero = 42;
}

int main() {
    int* miPuntero = NULL;
    modificarPuntero(&miPuntero);

    printf("Valor apuntado por miPuntero: %d\n", *miPuntero);

    // Hacer algo con 'miPuntero' (por ejemplo, imprimir su valor)
    // ...

    // Liberar memoria asignada dinámicamente
    free(miPuntero);
    
    return 0;
}