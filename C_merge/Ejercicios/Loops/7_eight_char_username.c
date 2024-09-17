#include <stdio.h>

int valid_username(char[20]);

int main(){
    char usuario[20];

    printf("Digite un nombre de usuario válido \n");
    scanf("%s", usuario);
    valid_username(usuario);
    // int pos = 2;
    // printf("Valor usuario[pos]=%c \n", usuario[pos]);

    while(1){
        printf("Digite un nombre de usuario válido \n");
        scanf("%s", usuario);
        
        if(valid_username(usuario)>8){
            printf("Nombre de usuario válido \n");
            break;
        }
    }
}

int valid_username(char usuario[20]){
    int contador = 0;
    /* 
        Encontrar el caracter nulo '\0' de la cadena usuario
        Es importante usar comillas simples en los caracteress
    */
    while(usuario[contador]!='\0'){
        contador++;
    }
    printf("contador: %i \n", contador);

    return contador;
}