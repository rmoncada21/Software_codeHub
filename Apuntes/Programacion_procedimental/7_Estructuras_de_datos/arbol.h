#ifndef ARBOL_H
#define ARBOL_H

// Definición de la estructura del nodo de un árbol binario
struct NodoArbol {
    int dato;
    struct NodoArbol* izquierda;
    struct NodoArbol* derecha;
};

// Función para crear un nuevo nodo del árbol
struct NodoArbol* crearNodo(int dato);

// Función para insertar un nuevo nodo en el árbol binario
struct NodoArbol* insertar(struct NodoArbol* raiz, int dato);

// Función para imprimir el árbol in-order (izquierda, raíz, derecha)
void imprimirInOrder(struct NodoArbol* raiz);

void imprimirArbol(struct NodoArbol* raiz, int nivel, char direccion);

#endif /* ARBOL_H */
