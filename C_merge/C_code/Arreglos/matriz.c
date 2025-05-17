#include <stdio.h>

int main(){

    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("\nDireccion de la tabla:\t %p \n",matriz);
    printf("\nDireccion de la tabla:\t %p \n",&matriz);
    printf("\nDireccion de la tabla:\t %p \n",*matriz);
}