#include <stdio.h>

void printf_array_asc(char** array, int size){
    printf("Ascendente\n");
    for(int i=0; i<size; i++){
        printf("element - %i: %s\n", i, *(array+i));
    }

}

void printf_array_desc(char** array, int size){
    printf("Descendente\n");

    for(int i=size; i>=0; i--){
        printf("element - %i: %s\n", i, *(array+i));
    }

}

int main(int argc, char* argv[]){
    
    printf_array_asc(argv, argc-1);
    printf_array_desc(argv, argc-1);

}