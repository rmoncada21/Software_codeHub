#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

#define NOMBRE_SIZE 50

estudiante_t crear_estudiante(void){
    estudiante_t nuevo_estudiante;
    char nombre [NOMBRE_SIZE];
    int edad;
    double calculo, programacion, datos;
    
    printf("\nDigite el nombre primer estudiante: \n");
    // scanf %s se detiene cuando encuentra un carácter de espacio en blanco
    // (espacios, tabuladores o saltos de línea).
    scanf("%49[^\n]", nombre);
    printf("Digite la edad del estudiante: \n");
    scanf("%i", &edad);
    printf("Digite la nota de calculo\n");
    scanf("%lf", &calculo);
    printf("Digite la nota de programacion\n");
    scanf("%lf", &programacion);
    printf("Digite la nota de datos\n");
    scanf("%lf", &datos);

    // Inicializar nuevo estudiante
    strcpy(nuevo_estudiante.nombre, nombre);
    nuevo_estudiante.edad=edad;
    nuevo_estudiante.notas.calculo=calculo;
    nuevo_estudiante.notas.programacion=programacion;
    nuevo_estudiante.notas.datos=datos;
    nuevo_estudiante.nota_final=(calculo+programacion+datos)/3;

    return nuevo_estudiante;
}

void mostrar_estudiante(estudiante_t estudiante){
    printf("\nNombre: %s\n", estudiante.nombre);
    printf("Nota de calculo: %f\n", estudiante.notas.calculo);
    printf("Nota de programacion: %f\n", estudiante.notas.programacion);
    printf("Nota de datos: %f\n", estudiante.notas.datos);
    printf("Nota final: %f\n", estudiante.nota_final);
}