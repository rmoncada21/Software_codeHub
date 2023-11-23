#include <stdio.h>


void main(){
    // int var = 0;
    // int *p=NULL;

    // var = 10;
    // printf("Direccion de la variable: %p", &var); // 0x7ffdfa97a794
    // printf("\nValor de la variable: %i", var); // 10

    // p=&var; // guardar la dirección de la variable
    // printf("\nDireccion de la variable: %p", p); // 0x7ffdfa97a794
    // printf("\nValor de la variable: %i\n", *p); // 10

    // *p=*p+10;
    // printf("\nDireccion de la variable: %p", &(*p));
    // printf("\nValor de la variable: %i\n", *p); 

    int contador = 0;
    int arreglo[10] = {2,6,4,8,3,12,32,54,25,77};
    int *puntero = NULL;

    do{
        puntero = &arreglo[contador];
        printf("\nValor de la variable: arreglo[%d]=%d\t Direccion:%d");
        printf("%p", contador, arreglo[contador], &arreglo[contador]); 


        printf("\nPuntero p=%p\tDirecion: %p\t");
        printf("\tContenido que apunta: %i");
        printf("\n", puntero, &puntero, *puntero);
        contador++; 
    }while(contador<10);
}

// #include <stdio.h>

// int main() {
//     int arreglo[] = {1, 2, 3, 4, 5};

//     int *puntero = NULL;

//     puntero = &arreglo[4];
//     *puntero = 15;

//     printf("%d\n", (int*)(&arreglo[4]));

//     // printf("Dirección: %d", (void*)&arreglo[contador]);
//     // printf("\nDirección: %d", *(&arreglo[contador]));
    
//     return 0;
// }
