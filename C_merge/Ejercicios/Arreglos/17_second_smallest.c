#include <stdio.h>

void get_array(int*, int);
void printf_array(int*, int);
int min_value(int*, int);
int max_value(int*, int);
int n_smallest(int*, int, int);
void replace_min_by_max(int*, int, int);

void get_array(int* arreglo, int size){
    for(int i=0; i<size; i++){
        printf("Ingrese valor: \n");
        int valor=0;
        scanf("%i", &valor);
        *(arreglo+i)=valor;
    }
}

void printf_array(int* arreglo, int size){
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%i ", *(arreglo+i));
    }
}

// minimo=10
//  10 5 6 4 8 1

int min_value(int* arreglo, int size){
    // int minimo=*(arreglo);
    printf("Función min value\n");
    int minimo;

    for(int i=0; i<size; i++){
        if(*(arreglo+i)<minimo){
            minimo=*(arreglo+i);
            // printf("\nValor de minimo: %i", minimo);
        }
    }
    return minimo;
}

int max_value(int* arreglo, int size){
    printf("Función max value\n");
    int max;

    for(int i=0; i<size; i++){
        if(*(arreglo+i)>max){
            max=*(arreglo+i);
            // printf("Valor mayor: %i\n", max);
        }
    }
    return max;
}

int n_smallest(int* arreglo, int size, int n){
    int contador=0;
    int second_min=0;

    while(contador<n){
        second_min=min_value(arreglo, size);
        replace_min_by_max(arreglo, size, second_min);
        printf("\n Valor de second_min: %i", second_min);
        contador++;
    }
    return second_min;
}

void replace_min_by_max(int* arreglo, int size, int valor){
    for(int i=0; i<size; i++){
        if(arreglo[i]==valor){
            arreglo[i]=max_value(arreglo, size);
        }
    }
}

int main(void){
    
    printf("Digite el tamaño del arreglo: \n");
    int size=0;
    scanf("%i", &size);
    int arreglo[size];

    get_array(arreglo, size);
    printf_array(arreglo, size);
    int second=n_smallest(arreglo, size, 2);
    printf("\nEl segundo menor es: %i", second);
}
