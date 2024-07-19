/*Acceso indirecto a los campos de una estructura*/
#include <stdio.h>
#include <string.h>
#include "struct.h"

int main(){
    struct Data data;
    struct Data *data_pointer;
    data_pointer = &data;
    // Acceder a los campos del struct a través del puntero
    (*data_pointer).n1 = 10;
    (*data_pointer).n2 = 20;
    strcpy((*data_pointer).st,"abcdefghij");
    
    // imprimir los valores
    printf("(*data_pointer).n1:%i \n", (*data_pointer).n1);
    printf("(*data_pointer).n2:%f \n", (*data_pointer).n2);
    printf("strcpy((*data_pointer).st, cadena: %s \n", (*data_pointer).st);


    // Segunda forma de acceder al struct
    struct Data *data_pointer2;
    data_pointer2 = &data;
    data_pointer2->n1 = 50;
    data_pointer2->n2 = 60;
    strcpy(data_pointer2->st,"ABCDEFGHIJ" );
    
    // imprimir los valores
    printf("data_pointer2->n1:%i \n", data_pointer2->n1);
    printf("data_pointer2->n2:%f \n", data_pointer2->n2);
    printf("strcpy(data_pointer2->st, cadena: %s \n", data_pointer2->st);
}
