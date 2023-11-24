#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Nodo{
    int dato;
    struct Nodo* siguiente_aux;
};

/*usando typedef se puede referenciar
Nodo* nuevoNodo*/

// typedef struct Nodo {
//     int dato;
//     struct Nodo* siguiente_aux;
// } Nodo;



// primero se debe crear nodo
struct Nodo* crearNodo(int dato){
    // crear el espacio de memoria del struct o registro
    struct Nodo* nuevoNodo;
    nuevoNodo = malloc(sizeof(struct Nodo));

    nuevoNodo->dato = dato;
    nuevoNodo->siguiente_aux = NULL;

    return nuevoNodo;
}

// Funcion para insertar un nodo al inicio

/*  struct Nodo** cabeza: Recibe un puntero a un puntero a struct Nodo. 
    Esto permite modificar la dirección del puntero cabeza original si 
    se inserta un nuevo nodo al inicio.

    *cabeza: Accede al puntero original que apunta al inicio de la lista.

    *cabeza = nuevoNodo;: Asigna la dirección del nuevo nodo al puntero 
    original, actualizando así la cabeza de la lista.
*/

void insertarAlInicio(struct Nodo** nodo_cabeza, int dato){
    struct Nodo* nuevoNodo;
    nuevoNodo = crearNodo(dato);
    nuevoNodo->siguiente_aux = *nodo_cabeza;
    *nodo_cabeza = nuevoNodo;

}

/* Otra forma de insertar
    y se debe llamar de la forma
    cabeza = insertarAlInicio(cabeza, nuevoDato);
*/
// struct Nodo* insertarAlInicio(struct Nodo* cabeza, int dato) {
//     struct Nodo* nuevoNodo = crearNodo(dato);
//     nuevoNodo->siguiente = cabeza;
//     return nuevoNodo; // Devuelve el nuevo puntero cabeza
// }

void mostrarLista(struct Nodo* cabeza) {
    while (cabeza != NULL) {
        printf("%d -> ", cabeza->dato);
        cabeza = cabeza->siguiente_aux;
    }
    printf("NULL\n");
}

// Función para liberar la memoria utilizada por la lista
void liberarLista(struct Nodo** cabeza) {
    while (*cabeza != NULL) {
        struct Nodo* temp = *cabeza;
        *cabeza = (*cabeza)->siguiente_aux;
        free(temp);
    }
}

int main() {
    // Crear una lista vacía
    struct Nodo* lista = NULL;

    // Insertar algunos elementos al inicio de la lista
    insertarAlInicio(&lista, 3);
    insertarAlInicio(&lista, 7);
    insertarAlInicio(&lista, 11);

    // Mostrar la lista
    printf("Lista inicial: ");
    mostrarLista(lista);

    // Liberar la memoria utilizada por la lista
    liberarLista(&lista);

    return 0;
}