// 12. Write a C program to read the roll no, name and marks of three subjects and
// calculate the total, percentage and average.


#include <stdio.h>

int total(int, int, int);

float percentage_subject(int);

float average(int, int, int);

int main(){
    int id;
    float subject1, subject2, subject3;
    char nombre[20];
/* 
    cuando se lee una cadena con %s, no sw necesita el & porque nombre ya es un 
    puntero al primer elemento del array
*/  
    printf("Id - Nombre - nota1 - nota2 - nota3 \n");
    scanf("%d %s %f %f %f", &id, nombre, &subject1, &subject2, &subject3);
    float average_f = average(subject1, subject2, subject3);
    printf("La nota del estudiante %s es de %f \n", nombre ,average_f);
}

int total(int subject1, int subject2, int subject3){
    return subject1 + subject2 + subject3;
}

float percentage_subject(int subject){
    return subject*0.01;
}

float average(int subject1, int subject2, int subject3){
    return (subject1 + subject2 + subject3)/3;
}