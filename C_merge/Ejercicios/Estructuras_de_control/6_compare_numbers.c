/*
Write a C program to read the value of an integer m and display the value of n 
is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
*/
#include <stdio.h>

int n_value(int);
void cheack_n_value(int);

int main(){
    int num;

    scanf("%d", &num);
    cheack_n_value(n_value(num));
}

void cheack_n_value(int num){
    if (num > 0){
        printf("El valor es MAYOR a cero \n");
    } 
    else if(num < 0){
        printf("El valor es MENOR a cero \n");
    } 
    else{
        printf("El valor es IGUAL a cero \n");
    }
}

int n_value(int num){
    if (num > 0){
        return 1;
    } 
    else if(num < 0){
        return -1;
    } 
    else{
        return 0;
    }
}