#include <stdio.h>

//  Prototipos de funciones

void fibonacci(void);

int main(){
    
    fibonacci();

}

void fibonacci(){
    int contador=0, suma=0;
    int fibonacci_a=0, fibonacci_b=1;
    printf("%i \n%i \n", fibonacci_a, fibonacci_b);
    while(contador < 10){
        suma=fibonacci_a+fibonacci_b;
        printf("%i \n", suma);
        fibonacci_a=fibonacci_b;
        fibonacci_b=suma;
        contador++;
    }
}