#include <stdio.h>


long factorial(int);


void main(){

    long numero = 0;

    printf("\nINgrese un numero entero: ");
    scanf("%ld", &numero);
    long numero_factorial = factorial(numero);
    printf("\nEl factorial del numero %ld es: %ld\n",numero, numero_factorial);

}

long factorial(int numero){

    return numero<2 ? numero:numero*factorial(numero-1);

}

/* 77777777777777777777777777777777777777777777777777777777777777777777777777*/
// char retorno(int);

// char retorno(int opcion){
//     // return opcion==1 ? 'y':'n';
//     return opcion==1 ? printf("yes"):printf("no");
// }

// void main(){
//     int opcion=0;
//     printf("\nINgrese un numero entero: ");
//     scanf("%ld", &opcion);
//     printf("%c\n",retorno(opcion));
// }
/* 77777777777777777777777777777777777777777777777777777777777777777777777777*/


// int sumaRecursiva(int numero) {
//     // Caso base: cuando n es igual a 0, la suma es 0.
//     // if (n == 0) {
//     //     return 0;
//     // } else {
//     //     // Caso recursivo: suma(n) = n + suma(n-1)
//     //     return n + sumaRecursiva(n - 1);
//     // }

//     return numero==0 ? numero:numero + sumaRecursiva(numero - 1);
// }

// int main() {
//     int numero;
//     printf("Ingrese un número natural: ");
//     scanf("%d", &numero);

//     if (numero < 0) {
//         printf("Por favor, ingrese un número natural.\n");
//     } else {
//         int resultado = sumaRecursiva(numero);
//         printf("La suma de los primeros %d números naturales es: %d\n", numero, resultado);
//     }

//     return 0;
// }
