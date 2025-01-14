#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

void get_array(int*, int);
void printf_array(int*, int);
void delete_position(int*, int, int);
void sort_ascending(int*, int);

void get_aray(int* arreglo, int size){
    for(int i=0; i<size; i++){
        printf("Ingrese un valor: ");
        int valor=0;
        scanf("%i", &valor);
        *(arreglo+i)=valor;
    }
}

void printf_array(int* arreglo, int size){
    printf("\n");
    for (int i=0; i<size; i++){
        printf("%i ", *(arreglo+i));
    }
}

// 1 2 3 4 5 6 7  size
// 1 2 3 5 6 7      new size
void delete_position(int* arreglo, int size, int posicion){
    int new_size=size-1;

    for(int i=posicion; i<size; i++){
        if(i<new_size){ 
            arreglo[i]=arreglo[i+1]; 
        }
    }

    printf_array(arreglo, size);
    arreglo=(int*)realloc(arreglo,new_size*sizeof(int));
    printf_array(arreglo, new_size);
}

int main(){
    int size=0;
    printf("Digite el tamaño del arreglo: \n");
    scanf("%i", &size);
    int* arreglo=(int*)malloc(size*sizeof(int));
    get_aray(arreglo, size);

    // Nuevo arreglo
    printf("Digite la posición a eliminar \n");
    int posicion=0;
    scanf("%i", &posicion);
    delete_position(arreglo, size, posicion);

}