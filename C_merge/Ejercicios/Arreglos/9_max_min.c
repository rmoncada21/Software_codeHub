#include <stdio.h>

void get_array(int*, int);
int max_array(int*, int);
int min_array(int*, int);

void get_array(int* arreglo, int size){
    for(int i=0; i<size; i++){
        int valor;
        scanf("%i", &valor);
        *(arreglo+i)=valor;
    }
}
// 1 5 8 7 3 6 4
int max_array(int* arreglo, int size){
    int max=-1;

    for(int i=0; i<size; i++){
        if(arreglo[i]>max){
            max=arreglo[i];
            printf("MAX: %i \n", max);
        }
    }
    return max;
}


int min_array(int* arreglo, int size){
    int min=max_array(arreglo, size);
    
    for(int i=0; i<size; i++){
        if(arreglo[i]<min){
            min=arreglo[i];
        }
    }

    return min;
}

int main (void){
    int size=0;

    printf("DIgite el tamaño de arreglo \n");
    scanf("%i", &size);
    
    int arreglo[size];
    get_array(arreglo, size);
    int min=min_array(arreglo, size);
    int max=max_array(arreglo, size);
    printf("Valor min: %i, max: %i \n", min, max);
}