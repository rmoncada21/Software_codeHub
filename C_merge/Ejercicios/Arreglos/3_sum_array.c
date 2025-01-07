#include <stdio.h>
#include <stdlib.h>

int sum_elements(int*, int);
void array_char_to_int(char**, int*, int);

int main(int argc, char *argv[]){
    // Se necesita convertir primero el arreglo de tipo char a entero
    int i_arreglo[argc];

    array_char_to_int(argv, i_arreglo, argc);
    printf("Suma: %i \n", sum_elements(i_arreglo, argc));

    return 0;
}

int sum_elements(int *arreglo, int size){
    int suma=0;

    for (int i=0; i<size; i++){
        suma+=*(arreglo+i);
    }

    return suma;
}

void array_char_to_int(char **ch_arreglo, int *i_arreglo, int size){
    for(int i=0; i<size; i++){
        *(i_arreglo+i)=atoi(*(ch_arreglo+i));
    }
}