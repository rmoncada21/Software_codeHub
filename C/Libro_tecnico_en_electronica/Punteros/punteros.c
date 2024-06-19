#include <stdio.h>

int main() {
    int a = 10;     // Una variable entera
    int *ptr = &a;  // Un puntero que almacena la dirección de 'a'

    printf("Valor de a: %d\n", a);             // Imprime el valor de 'a'
    printf("Dirección de a: %p\n", (void*)&a); // Imprime la dirección de 'a'
    printf("Valor almacenado en ptr: %p\n", (void*)ptr); // Dirección a la que apunta 'ptr'
    printf("Valor al que apunta ptr: %d\n", *ptr); // Valor en la dirección a la que apunta 'ptr'

    *ptr = 20; // Cambia el valor de 'a' usando el puntero

    printf("Nuevo valor de a: %d\n", a); // Imprime el nuevo valor de 'a'

    return 0;
}


int main() 
{
    // Declaración de variables tipos enteros
    int num1, num2;
    // Declararción de variables tipo puntero a entero
    int *ptr1, *ptr2;

    // Asignación de memoria a punteros
    ptr1 = &num1;
    ptr2 = &num2;

    num1 = 10;
    num2 = 20;

    ptr1 = ptr2;
    ptr2 = NULL;

    return 0;
} 