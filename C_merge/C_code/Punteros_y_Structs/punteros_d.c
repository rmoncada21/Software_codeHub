// Asignación de una dirección de memoria a puntero
#include <stdio.h>

int main(){
    
    // Variables de tipo entero
    int num1;

    // Variables punteros a enteros
    int *ptr1;

    // Inicialización de las variables
    num1 = 10;

    // Guardar la dirección de memoria en los punteros
    ptr1 = &num1;
    
    // Guardar el contenido del puntero ptr1 a la variable contenido
    int contenido;
    contenido = *ptr1;
    
    // imprimir 
    printf("Dirección de la variable ptr1: %p \n", (void*)ptr1);
    // otra forma de ver el contenido de ptr1
    printf("Ver el contenido desreferenciando ptr1: %i \n", *ptr1);
    printf("Contenido de ptr1: %i \n", contenido);


}