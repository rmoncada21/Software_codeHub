#include <stdio.h>
#include "complex.h"

void add_complex(complex_t n1, complex_t n2){
    complex_t numero_complejo;

    numero_complejo.real=n1.real+n2.real;
    numero_complejo.imaginario=n1.imaginario+n2.imaginario;

    printf("\nSuma de numeros complejos");
    printf("\nN1: %f + j%f", n1.real, n1.imaginario);
    printf("\nN2: %f + j%f", n2.real, n2.imaginario);
    printf("\nResultado: %f + j%f\n", numero_complejo.real, numero_complejo.imaginario);
}


void multiply_complex(complex_t n1, complex_t n2){
    complex_t numero_complejo;

    numero_complejo.real=n1.real*n2.real-n2.imaginario;
    numero_complejo.imaginario=n1.real*n2.imaginario + n1.imaginario*n2.real;

    printf("\nMultiplicación de numeros complejos");
    printf("\nN1: %f + j%f", n1.real, n1.imaginario);
    printf("\nN2: %f + j%f", n2.real, n2.imaginario);
    printf("\nResultado: %f + j%f\n", numero_complejo.real, numero_complejo.imaginario);
}