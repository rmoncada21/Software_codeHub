#include <stdio.h>
#include <string.h>


struct notas{
    int proyecto;
    int examen;
    char grades[20];
}; //calificacion = {10, 10};

struct escuela{
    struct notas notas;
    char nombre_escuela[20];
}; // ceb = {{10, 10},"Electronica"};

struct curso{
    char nombre[12];
    char apellido[15];
    char genero;
    long documento;
    int edad;
    char direccion[30];

    struct escuela escuela;

}; // alumno = {"HHH"," ",0,111111,0," ", {{10, 10,"exc"},"Electronica"}};


void main(){
    // struct curso alumno;
    // // alumno.nombre = "ffff";
    // strcpy(alumno.escuela.notas.grades, "excelente");
    
    // printf("nombre %s\n",alumno.escuela.notas.grades );

    struct curso alumno = {"HHH", " ", 0, 111111, 0, " ", {{10, 10, "exc"}, "Electronica"}};
    struct curso alumno_arreglo[7] = {alumno, alumno, alumno, alumno, alumno, alumno, alumno};

    struct curso *puntero_curso;

    puntero_curso = &alumno_arreglo[2];

    printf("\nNombre de la posicion 2 %s:", (*puntero_curso).escuela.notas.grades);
    printf("\nNombre de la posicion 2 %s:", puntero_curso->escuela.notas.grades);

}