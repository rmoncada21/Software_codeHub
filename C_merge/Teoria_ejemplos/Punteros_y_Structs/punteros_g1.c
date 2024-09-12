// Parámetros por referencia
#include <stdio.h>

void swap_value(int *a, int *b);

// Hacer funcion swap
int main(){
    int a = 1;
    int b = 2;
    printf("valores-> a:%i,b:%i \n",a, b );
    
    int *puntero_a = &a;
    int *puntero_b = &b;
    // swap_value(puntero_a, puntero_b);

    swap_value(&a, &b);

    printf("valores-> a:%i,b:%i \n",a, b );
}


void swap_value(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}