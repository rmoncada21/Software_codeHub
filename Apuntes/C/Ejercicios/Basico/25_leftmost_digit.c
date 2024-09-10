/*25. 
Write a C program to check if two or more nonnegative integers 
have the same rightmost digit.
*/

#include <stdio.h>
#include <stdbool.h>

int leftmost_digit(int);

int main(){
    int num1, num2;
    scanf("%i %i", &num1, &num2);

    if(leftmost_digit(num1) == leftmost_digit(num2)){
        printf("Tiene los digitos mas a la izquierda iguales \n");
    } else {
        printf("Tiene los digitos mas a la izquierda diferentes \n");
    }
}

int leftmost_digit(int n){
    float leftmost = n;
    while(true){
        // leftmost = leftmost/10;
        leftmost /= 10;
        if ((int)leftmost == 0){
            break;
        }
    }
    return (int)(leftmost*10);
}