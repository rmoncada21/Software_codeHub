#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 20

typedef union{
    char name[CHAR_SIZE];
    int id;
}data_t;

int main(){
    data_t person;
    data_t *ptr;

    ptr=&person;

    strcpy(ptr->name, "SUJETO 1234");

    printf("Nombre usando puntero: %s\n", ptr->name);
    printf("Nombre usando union: %s\n", person.name);

    return 0;
}