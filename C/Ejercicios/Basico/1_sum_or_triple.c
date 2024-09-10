/*1. 
    Write a C program to compute the sum of the two input 
    values. If the two values are the same, then return triple their sum.
*/

#include <stdio.h>


int main() {
    float num1;
    float num2;

    // int scanf(const char *format-string, argument-list);
    scanf("%f", &num1);
    scanf("%f", &num2);
    // scanf("%f %f", &num1, &num2);

    if (num1 == num2)
        printf("%f", (num1+num2)*3);
    else
        printf("%f\n", (num1+num2));
}
