/*
Write a C program to check if two given non-negative integers 
have the same last digit.
*/

#include <stdio.h>
#include <stdbool.h>

bool check(int, int);

int main(){
    int num1;
    int num2;
    
    scanf("%i %i", &num1, &num2);
    check(num1, num2);
}


bool check(int n1, int n2){
    int last_digit;
    last_digit = n1%10;
    
    if (last_digit == (n2%10)) {
        printf("Los número terminan en el mismo digito \n");
        return true;
    } else {
        printf("Los número NO terminan en el mismo digito \n");
        return false;
    }
}

