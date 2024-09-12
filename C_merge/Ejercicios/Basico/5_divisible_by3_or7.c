/*
Write a C program that checks if a positive integer is 
divisible by either 3 or 7, or both. If the integer is a 
multiple of 3, then the program will return true. Similarly, 
if the integer is a multiple of 7, then also the program will 
return true. If the integer is not a multiple of 3 or 7, then 
the program will return false
*/

#include <stdio.h>
#include <stdbool.h>

bool divisible_by_3(int n);
bool divisible_by_7(int n);
bool positive_number(int n);

int main(){
    int n;
    
    scanf("%i", &n);

    if (n >= 0) {
        if (divisible_by_3(n) ==  true) {
            printf("El numero %i es divisble entre 3 \n", n);    
            if (divisible_by_7(n) == true) {
                printf("El numero %i también es divisble entre 7 \n", n);
            } else {
                printf("\n");
            }
        }else if (divisible_by_7(n) == true) {
            printf("El numero %i es divisble entre 7 \n", n);
            if (divisible_by_3(n) == true) {
                printf("También es divisible por 3 \n"); 
            } else {
                printf("\n");
            }
        } else {
            printf("El número %i no es divisible entre 3 o 7 \n", n);
        }
    } else {
        printf("se ingresó un numero negativo");
    }
    
}

bool divisible_by_3(int n){
    if (n%3==0) 
        return true;
    else 
        return false;
}

bool divisible_by_7(int n){
    if (n%7==0) 
        return true;
    else 
        return false;
}

bool positive_number(int n){
    if (n >= 0) return true;
    else return false;
}