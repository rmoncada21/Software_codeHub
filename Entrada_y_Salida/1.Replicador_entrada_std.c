#include <stdio.h>

int main(void){
    /* Inicializar siempre las variables */

    char character = '\0';
    
    // TODO(you): Read one character at a time

    /* Obtiene el valor "e" */

    //while (scanf("En algún d%c la mancha", &character) != EOF){
    //while (scanf("En algún d%c la mancha", &character) == 1){
    while (scanf("%c", &character) == 1){    
        // TODO(you): print that character 
        
        /*  Funcion para imprimir char caracter devuelve un valor tipo entero
            por tanto para printf pueda imprimirlo se debe enviar la dirección
            de memoria de la variable mediante:
            &character
        */

        printf("%c", character) 
    }


    return 0;
}