#include <stdio.h>
#include <stdlib.h>

void get_array(int*, int);
void printf_array(int*, int);
void sort_array(int*, int);
int* add_value(int*, int, int);

void get_array(int* arreglo, int size){
    printf("\nTamaño: %i\n", size);
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

// void sort_array(int* arreglo, int size){
//     int swap;

//     while(swap){
//         swap=0;
//         for(int i=0; i<size; i++){
//             if( i<(size-1) && arreglo[i]>arreglo[i+1] ){
//                 int temporal=arreglo[i];
//                 arreglo[i]=arreglo[i+1];
//                 arreglo[i+1]=temporal;
//                 swap=1;
//             }
//         }
//     }

//     printf_array(arreglo, size);
// }


int* add_value(int* arreglo, int size, int new_space){
    // printf("Digite la nueva cantidad de espacios: \n");
    // int new_space=0;
    // scanf("%i ", &new_space);

    // int new_size=size+new_space;
    int* nuevo_arreglo=(int*)realloc(arreglo, (size+new_space)*sizeof(int));

    for(int i=0; i<new_space; i++){
        printf("\nDigite el nuevo valor de la pos %i \n", (size+i));
        int valor=0;
        scanf("%i", &valor);
        *(nuevo_arreglo+size+i)=valor;
    }
    
    // sort_array(nuevo_arreglo, new_size);
    return nuevo_arreglo;
}

int main(void){
    int size;
    printf("Digite el tamaño del arreglo \n");
    scanf("%i", &size);
    int* arreglo_malloc=(int*)malloc(size*sizeof(int));

    get_array(arreglo_malloc, size);
    // sort_array(arreglo_malloc, size); printf("\n");

    printf("\nDigite la nueva cantidad de espacios: \n");
    int new_space=0;
    scanf("%i ", &new_space);
    int new_size=size+new_space;

    int* nuevo_arreglo=add_value(arreglo_malloc, size, new_space);
    // sort_array(nuevo_arreglo, new_size); printf("\n");
    printf_array(nuevo_arreglo, new_size); printf("\n");
    
    // Liberar memoria
    free(arreglo_malloc);
}