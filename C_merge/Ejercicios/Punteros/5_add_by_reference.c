#include <stdio.h>
#include <stdlib.h>

int* add(int*, int*);

/*  
El uso de memoria dinámica es necesario en este caso específico 
porque se retorna un puntero a una dirección que debe seguir 
existiendo después de que la función add termine. Si no se asigna
memoria dinámica, podrías terminar con un puntero colgante 
(dangling pointer) que apunta a una dirección de memoria que ya 
no es válida.

Devolviendo un puntero (int*):

Cuando se devuelve un puntero, se esta devolviendo una dirección de memoria que 
apunta a un valor almacenado en algún lugar. 
Si el valor apuntado está en el stack (como una variable local), esa memoria 
dejará de ser válida cuando la función termine. Por eso se necesita usar 
malloc (o una solución similar) para asegurarte de que el espacio de memoria 
sigue existiendo después de que la función termine.

*/
int* add(int* n1, int* n2){
    int* suma = (int*)malloc(sizeof(int));

    *suma=*n1+*n2;

    return suma;
}

int main(int argc, char* argv[]){
    int* suma;
    int n1, n2;

    // scanf();
    n1=atoi(argv[1]);
    n2=atoi(argv[2]);
    // suma=&n1;

    suma=add(&n1, &n2);

    printf("Dirección de la variable suma: %p\n", &suma);
    printf("Contenido de la variable suma: %i\n", *suma);

    free(suma);

    return 0;
}