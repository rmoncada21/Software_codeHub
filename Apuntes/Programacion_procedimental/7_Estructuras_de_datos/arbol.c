#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

// Función para crear un nuevo nodo del árbol
struct NodoArbol* crearNodo(int dato) {
    struct NodoArbol* nuevoNodo = (struct NodoArbol*)malloc(sizeof(struct NodoArbol));
    nuevoNodo->dato = dato;
    nuevoNodo->izquierda = NULL;
    nuevoNodo->derecha = NULL;
    return nuevoNodo;
}

// Función para insertar un nuevo nodo en el árbol binario
struct NodoArbol* insertar(struct NodoArbol* raiz, int dato) {
    if (raiz == NULL) {
        return crearNodo(dato);
    }

    if (dato < raiz->dato) {
        raiz->izquierda = insertar(raiz->izquierda, dato);
    } else if (dato > raiz->dato) {
        raiz->derecha = insertar(raiz->derecha, dato);
    }

    return raiz;
}

// Función para imprimir el árbol in-order
void imprimirInOrder(struct NodoArbol* raiz) {
    if (raiz != NULL) {
        imprimirInOrder(raiz->izquierda);
        printf("%d ", raiz->dato);
        imprimirInOrder(raiz->derecha);
    }
}

void imprimirArbol(struct NodoArbol* raiz, int nivel, char direccion) {
    if (raiz != NULL) {
        imprimirArbol(raiz->derecha, nivel + 1, 'd');

        for (int i = 0; i < nivel; i++) {
            printf("    ");
        }

        printf("%d", raiz->dato);

        if (direccion == 'd') {
            printf(" -->");
        } else if (direccion == 'i') {
            printf(" <--");
        }

        printf("\n");

        imprimirArbol(raiz->izquierda, nivel + 1, 'i');
    }
}

int main() {
    // Crear un árbol binario vacío
    struct NodoArbol* raiz = NULL;

    // Insertar elementos en el árbol binario
    raiz = insertar(raiz, 50);
    raiz = insertar(raiz, 30);
    raiz = insertar(raiz, 70);
    raiz = insertar(raiz, 20);
    raiz = insertar(raiz, 40);
    raiz = insertar(raiz, 60);
    raiz = insertar(raiz, 80);

    // Imprimir el árbol in-order
    printf("Árbol in-order: ");
    imprimirArbol(raiz,0,'-');
    printf("\n");

    return 0;
}