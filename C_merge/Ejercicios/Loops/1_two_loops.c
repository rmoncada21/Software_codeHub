#include <stdio.h>

int main(){
    int contador = 0;
    while(contador <= 10){
        printf("Número externo: %i \n", contador);
        
        if(contador == 10){
            printf("Ciclo interno \n");
            int contadorb = 10;
            
            while(contadorb >= 0){
                printf("Número interno: %i \n", contadorb);
                contadorb--;
            }
        }
        contador++;
    }
}