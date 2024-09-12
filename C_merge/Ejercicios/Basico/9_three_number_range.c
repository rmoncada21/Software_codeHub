/* 
Write a C program that checks if three given integers are in the 
range of 20 to 50 (inclusive) and returns true if at least one of 
them is within the range. If none of the integers are within the 
range, the program returns false.
*/

#include <stdio.h>
#include <stdbool.h>

bool range(int);

int main(){
    int n1;
    int n2;
    int n3;

    scanf("%i %i %i", &n1, &n2, &n3);
    if (range(n1) == true || range(n2) == true || range(n3) == true) {
            printf("true");
    } else {
        printf("false");
    }
}

bool range(int n){
    if (n>=20 && n<=50){
        printf("El número %i está dentro del rango [20, 50] \n", n);
        return true;
    } else {
        printf("El número %i NO está dentro del rango [20, 50] \n", n);
        return false;
    }
}