#ifndef STUDENT_H
#define STUDENT_H

#define NOMBRE_SIZE 50

struct notas{
    double calculo;
    double programacion;
    double datos;
};

typedef struct estudiante{
    char nombre[NOMBRE_SIZE];
    int edad;
    double nota_final;
    struct notas notas;
}estudiante_t;

// funciones
// typedef struct estudiante estudiante_t;

estudiante_t crear_estudiante(void);
void mostrar_estudiante(estudiante_t estudiante);

#endif