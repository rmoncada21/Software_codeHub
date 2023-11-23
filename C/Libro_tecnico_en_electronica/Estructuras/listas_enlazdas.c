#include <stdio.h>
#include <string.h>

struct caracteristicas{
    
    int edad;
    int general[10];

};


struct datos{
    
    struct caracteristicas personales;
    char nombre[20];
    char apellido[20];

}

struct pais{
    
    struct datos persona;
    char nacionalidad[20];
    char provincia[20];

    /* Puntero siguiente para hacer las listas */
    struct pais *siguiente;

};

void main(){

    struct pais *lista = NULL; 
    struct pais *aux = NULL;   // sirve para agregar al inicio y para agregar al final
    struct pais *nuevo = NULL; // es un puntero aux que sirve para agregar al final de la lista
    
    lista = malloc(sizeof(struct pais));
    /*asignaciones de de inicizacion de la lista*/
    lista -> siguiente = NULL;

    // ////////////////////////////////////////////////////////////////////////////////////////////////////

    /* Agregar otro nodo a la lista (al inicio de la lista)*/
    aux = lista;
    lista = malloc(sizeof(struct pais)); 
    /*asignaciones de de inicizacion de la lista*/
    lista->siguiente = aux;
    


    // ////////////////////////////////////////////////////////////////////////////////////////////////////
    /* Agregar otro nodo a la lista (al final de la lista)*/
    aux = lista;
    while(aux->siguiente ! = NULL){
        aux=aux->sguiente;
    }

    nuevo = malloc(sizeof(struct pais)); 
    /*asignaciones de de inicizacion de la lista*/
    nuevo->siguiente = NULL;

    // vincular los nodos de la lista
    aux->siguiente = nuevo;
    



}