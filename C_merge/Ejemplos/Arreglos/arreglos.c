#include <stdio.h>


int main(){
    // char caracter;
    // scanf("%s", &caracter);
    // printf("%c\n", caracter);

    // char cadena[20];
    // scanf("%s", cadena);
    // printf("%s\n", cadena);

    // char cadena2 []= "Hola mundo";
    // printf("%c\n", *(cadena2+2));

    long arreglo[] = {16,32,64};
    printf("\nDireccion del primer elemento: %p \tValor: %ld \n", arreglo, *(arreglo+1));

}