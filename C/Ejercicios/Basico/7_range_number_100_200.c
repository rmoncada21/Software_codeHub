/* 
Write a C program to check two given integers whether either of them is in the 
range 100..200 inclusive.
*/

#include <stdio.h>
#include <stdbool.h>

bool number_range(int);

int main(){
    int n1;
    int n2;

    scanf("%i %i", &n1, &n2);

    number_range(n1);
    number_range(n2);
}

bool number_range(int n){
    if (100<n && n<200){
        printf("El numero %i se encuentra dentro del rango [100, 200]\n", n);
        return true;
    } else {
        printf("El numero %i NO se encuentra dentro del rango [100, 200]\n", n);
        return false;
    }
}