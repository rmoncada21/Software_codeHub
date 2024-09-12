#include <stdio.h>

int main(){
    int entero = 0;
    int suma = 0;

    while(1){
        
        scanf("%i", &entero);
        suma+=entero;
        printf("Suma: %i \n", suma);
        if(entero == 0){
            break;
        }   
    }
}