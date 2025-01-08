#include <stdio.h>
#include <stdlib.h>

void get_array(char**, int*, int);
int duplicate_value_array(int*, int);
void printf_array(int*, int);

int main(int argc, char *argv[]){
    int i_arreglo[argc-1];

    printf("valor de argc %i: \n", argc-1);
    // printf("argv[0]: %s: \n", argv[0]);
    get_array(argv, i_arreglo, argc-1);
    printf_array(i_arreglo, argc-1);
    
    int duplicate=duplicate_value_array(i_arreglo, argc-1);
    printf("Duplicados: %i \n ", duplicate);
}

void get_array(char **ch_arreglo, int *i_arreglo, int size){
    // convertir char a int
    for(int i=0; i<size; i++){
        *(i_arreglo+i)=atoi(*(ch_arreglo+i+1));
    }
}

int duplicate_value_array(int *i_arreglo, int size){
    int duplicate_array[size];
    int duplicate=0;

    for(int i=0; i<size; i++){
        int valor=*(i_arreglo+i);
        // printf("Primer for: %i ", valor);
        for(int j=0; j<size; j++){
            if(j!=i && valor >= 0 && valor==*(i_arreglo+j)){
                *(i_arreglo+j)=-1;
                duplicate+=1;
            }
        }
    }
    printf_array(i_arreglo, size);
    return duplicate;
}

void printf_array(int *i_arreglo, int size){
    printf("Valores: \n");
    for(int i=0; i<size; i++){
        printf("%i ", *(i_arreglo+i));
    }
}