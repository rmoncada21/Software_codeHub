/*
19. Write a C program that checks if a given non-negative integer is a multiple of 
13 or one more than a multiple of 13. For example, if the given integer is 26 or 27, 
the program will return true, but if it is 25 or 28, the program will return false.
*/


#include <stdio.h>
#include <stdbool.h>

bool multiple_of13(int);

int main(){
    int num;
    scanf("%i", &num);
    multiple_of13(num);
}


bool multiple_of13(int n){
    if ((n%13) == 0){
        printf("El numero %i es multiplo de 13 \n", n);
        return true;
    } else if ((n%13) == 1){
        printf("EL numero es una unidad mayor al multiplo de trece \n");
        return true;
    } else {
        printf("EL numero NO es una unidad mayor ni multiplo de trece \n");
        return false;
    }
}
