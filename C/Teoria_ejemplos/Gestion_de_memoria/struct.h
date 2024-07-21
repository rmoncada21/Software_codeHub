#ifndef STRUCT_H
#define STRUCT_H

#define TABLE_SIZE 10

struct celda{
    int a;
    int b;
    int tabla[TABLE_SIZE];
};

struct contacto{
    int edad;
    char *nombre, *apellido; 
};

#endif