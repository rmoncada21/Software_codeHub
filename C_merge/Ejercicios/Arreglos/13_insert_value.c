#include <stdio.h>

void get_array(int*, int);
void insert_value(int*, int);
void printf_array(int*, int);
void sort_array(int*, int);

void get_array(int* arreglo, int size){
    printf("\nTamaño: %i", size);
    int valor=0;

    for(int i=0; i<size; i++){
        printf("Ingrese un valor: \n");
        scanf("%i", &valor);
        *(arreglo+i)=valor;
    }

    printf_array(arreglo, size);
}

void printf_array(int* arreglo, int size){
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%i ", *(arreglo+i));
    }
}

void sort_array(int* arreglo, int size){
    int swap;

    while(swap){
        swap=0;
        for(int i=0; i<size; i++){
            if( i<(size-1) && arreglo[i]>arreglo[i+1] ){
                int temporal=arreglo[i];
                arreglo[i]=arreglo[i+1];
                arreglo[i+1]=temporal;
                swap=1;
            }
        }
    }

    printf_array(arreglo, size);
}

void insert_value(int* arreglo, int size){

}

int main(void){
    
}