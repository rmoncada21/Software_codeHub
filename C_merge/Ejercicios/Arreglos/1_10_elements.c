#include <stdio.h>

void set_array_element(int*, int);
void get_array_element(int*, int);

#define ARREGLO_SIZE 10

int main(){
    int arreglo[ARREGLO_SIZE]={0};
    set_array_element(arreglo, ARREGLO_SIZE);
    get_array_element(arreglo, ARREGLO_SIZE);

}

void set_array_element(int *arreglo, int size){
    for (int i=0; i<size; i++){
        int valor=0;
        printf("element  %i:", i);
        scanf("%i", &valor);
        *(arreglo+i)=valor;
    }
}

void get_array_element(int *arreglo, int size){
    printf("Elements in array are: ");
    for (int i=0; i<size; i++){
        printf("%i ", *(arreglo+i));
    }
}