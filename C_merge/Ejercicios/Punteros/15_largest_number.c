#include <stdio.h>
#include <stdlib.h>

int* largest_number(int* n1, int* n2){

    if(*n1>*n2) return n1;
    else return n2;

}


int main(int argc, char* argv[]){
    int arg1=atoi(argv[1]);
    int arg2=atoi(argv[2]);

    printf("Largest number %i\n", *largest_number(&arg1, &arg2));

    return 0;
}