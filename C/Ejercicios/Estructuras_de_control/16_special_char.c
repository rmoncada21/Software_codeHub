/*
16. Write a C program to check whether a character is an alphabet, digit or special character. 
Test Data :
@
Expected Output :
This is a special character.
*/
#include <stdio.h>
#define salto "\n"

void is_special_char(char);

int main(){
    char car=125;

    printf("Digitar un caracter cualquiera: \n");
    scanf("%s", &car);
    // printf("%c \n", car);
    is_special_char(car);
}

void is_special_char(char car){
    if ((64<car &&  car<91) || (96<car && car<123)){
        printf("NO \n");
    } else {
        printf("SI \n");
    }
}