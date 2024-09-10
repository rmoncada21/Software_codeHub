/*
Write a C program that checks two given integers and returns 
true if at least one of them is 30 or if their sum is 30. 
In other words, if either of the two integers is 30 or if 
their sum equals 30, the program will return true
*/

#include <stdio.h>
#include <stdbool.h>

bool equal_or_sum_30(int, int);

int main() {
    int num1;
    int num2;

    scanf("%i %i", &num1, &num2);
    equal_or_sum_30(num1, num2);
}


bool equal_or_sum_30(int num1, int num2){
    
    if (num1 == 30 || num2 == 30 || (num1+num2) == 30)
        return true;
    else
        return false;
}