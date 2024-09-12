#include <stdio.h>

int main(){
    int producto = 1, contador = 1;
    
    while(contador < 6){
        producto*=contador++;
        printf("Producto: %i \n", producto);
    }   
}