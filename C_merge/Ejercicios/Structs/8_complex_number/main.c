#include <stdio.h>
#include "complex.h"

int main(){
    complex_t numero_complejo1={5,0};
    complex_t numero_complejo2={2,5};

    add_complex(numero_complejo1, numero_complejo2);
    multiply_complex(numero_complejo1, numero_complejo2);

    return 0;
}