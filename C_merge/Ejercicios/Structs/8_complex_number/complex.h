#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct{
    float real;
    float imaginario;
}complex_t;

// Prototipos de funciones

void add_complex(complex_t, complex_t);
void multiply_complex(complex_t, complex_t);

#endif