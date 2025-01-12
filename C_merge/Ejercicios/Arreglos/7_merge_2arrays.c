#include <stdio.h>

void get_array(int*, int);
void merge_array(int*, int*, int*, int);
void sort_array(int*, int*, int);
int find_max(int*, int);
void printf_array(int*, int);

void get_array(int* arreglo, int size){
    int contador=0;
    int elemento=0;
    
    printf("Ingresar valores del arreglo \n");
    while(contador<size){
        printf("Ingrese un número: ");
        scanf("%i", &elemento);
        *(arreglo+contador)=elemento;
        contador++;
    }
}

void printf_array(int* arreglo, int size){
    printf("Arreglo: ");

    for(int i=0; i<size; i++){
        printf("%i ", arreglo[i]);
    }
}

void merge_array(int* merged_array, int* arreglo1, int* arreglo2, int size){
    int new_size=2*size;

    for(int i=0; i<new_size; i++){
        if(i>=size){
            merged_array[i]=arreglo2[i-size];
        } else {
            merged_array[i]=arreglo1[i];
        }
    }
}

int find_max(int* arreglo, int size){
    int max=0;

    for(int i=0; i<size; i++){
        if(arreglo[i]>=max){
            max=arreglo[i];
        }    
    }

    return max;
}

int find_min(int* arreglo, int size){
    int min=find_max(arreglo, size);

    for(int i=0; i<size; i++){
        if(arreglo[i]<=min){
            min=arreglo[i];
        }    
    }

    return min;
}

void sort(int* arreglo, int size){
    int temporal=0;
    int swap=0;
    
    while(swap){
        swap=0;

        for(int i=0; i<size; i++){    
            if(i<(size-1) && arreglo[i]<arreglo[i+1]){
                temporal=arreglo[i];
                arreglo[i]=arreglo[i+1];
                arreglo[i+1]=temporal;
                swap=1;
            }
            printf_array(arreglo, size); printf("\n");
        }
    }
    
}

void sort_dowhile(int* arreglo, int size){
    int temporal=0;
    int swap;
    do{
        swap=0;
        
        for(int i=0; i<size; i++){    
            if(i<(size-1) && arreglo[i]<arreglo[i+1]){
                temporal=arreglo[i];
                arreglo[i]=arreglo[i+1];
                arreglo[i+1]=temporal;
                swap=1;
            }
            printf_array(arreglo, size); printf("\n");
        }
        
    } while(swap);
    
}

// void sort(int* arreglo, int size){
//     int temporal=0;

//     for(int i=0; i<size; i++){
        
//         if(i<(size-1) && arreglo[i]<arreglo[i+1]){
//             temporal=arreglo[i];
//             arreglo[i]=arreglo[i+1];
//             arreglo[i+1]=temporal;
//         }
//         printf_array(arreglo, size); printf("\n");
//     }
// }

int main(void){
    int size=0;

    printf("DIgite el tamaño de los arreglos \n");
    scanf("%i", &size);
    
    // Declaración de arreglos
    int arreglo1[size], arreglo2[size];
    int merged_array[2*size];

    get_array(arreglo1, size);
    get_array(arreglo2, size);

    // Imprimir arreglo 
    printf_array(arreglo1, size);
    printf_array(arreglo2, size);

    merge_array(merged_array, arreglo1, arreglo2, size);
    printf_array(merged_array, 2*size);
    printf("Numero max: %i\n", find_max(merged_array, 2*size));
    printf("Numero min: %i\n", find_min(merged_array, 2*size));
    sort(merged_array, 2*size);
    printf_array(merged_array, 2*size);
    printf("\n");
}
