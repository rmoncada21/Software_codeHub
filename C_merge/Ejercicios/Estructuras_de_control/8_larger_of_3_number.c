// 8. Write a C program to find the largest of three numbers.

#include <stdio.h>

int larger_of_two(int, int);
int larger_of_three(int, int);

int main(){
    int num1, num2, num3, larger;

    scanf("%d %d %d", &num1, &num2, &num3);
    larger = larger_of_three(larger_of_two(num1, num2), num3);
    printf("El  mayor es %d ", larger);
}

int larger_of_two(int num1, int num2){
    if(num1>num2){
        return num1;
    } else {
        return num2;
    }
}

int larger_of_three(int num1, int num2){
    if(num1>num2){
        return num1;
    } else {
        return num2;
    }
}
