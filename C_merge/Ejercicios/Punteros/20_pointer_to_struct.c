#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 50

typedef struct{
    char name[CHAR_SIZE];
    int id;
}data_t;

data_t crear_sujeto(){
    data_t nueva_persona;

    strcpy(nueva_persona.name, "SUJETO 1234");
    nueva_persona.id=1234;

    return nueva_persona;
}

void crear_sujeto_ptr(data_t* nueva_persona){
    strcpy(nueva_persona->name, "SUJETO ABCD");
    nueva_persona->id=5678;

}

void mostrar_sujeto(data_t* persona){
    printf("Nombre de persona: %s\n", persona->name);
    printf("ID de persona: %i\n", persona->id);
}

int main(int argc, char* argv[]){
    data_t person;
    data_t *ptr;

    // Modificar los datos por estructuras
    person=crear_sujeto();
    printf("Mostrar sujeto usando estructuras\n");
    mostrar_sujeto(&person);
    // Modificar por medio de punteros
    ptr=&person;
    crear_sujeto_ptr(ptr);
    printf("\nMostrar sujeto usando punteros\n");
    mostrar_sujeto(ptr);
}