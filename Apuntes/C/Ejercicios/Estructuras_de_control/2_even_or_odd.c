// 2. Write a C program to check whether a given number is even or odd.
#include <stdio.h>

int check_even_or_odd(int);

int main(){
    int num;

    scanf("%d", &num);

    /*
        En C, las funciones se manejan como punteros, por lo que check_even_or_odd 
        sin paréntesis es un puntero a la función check_even_or_odd. El resultado 
        incluir parentesis en la función es NULL.
    */

    if(check_even_or_odd(num)==0){
        printf("EL número %d es par: \n", num);
    }else{
        printf("EL número %d es impar: \n", num);
    }
}

int check_even_or_odd(int num){
    if ((num%2)==0) {
        return 0;
    } else {
        return 1;
    }
}
