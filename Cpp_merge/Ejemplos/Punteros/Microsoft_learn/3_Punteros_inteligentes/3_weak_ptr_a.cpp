/*
    En C++, cuando se usa shared_ptr, varios punteros pueden compartir la propiedad de 
    un objeto, y el objeto se destruye automáticamente cuando el último shared_ptr que
    apunta a él se destruye. Sin embargo, si dos objetos shared_ptr se refieren 
    mutuamente, entonces nunca se destruyen, causando una fuga de memoria (lo que se 
    llama un "ciclo de referencia").
*/

#include <iostream>
#include <memory>  // Para usar shared_ptr

class B; // Declaración adelantada

class A {
public:
    std::shared_ptr<B> ptrB; // A tiene un shared_ptr a B
    ~A() { std::cout << "Destructor de A\n"; }
};

class B {
public:
    std::shared_ptr<A> ptrA; // B tiene un shared_ptr a A
    ~B() { std::cout << "Destructor de B\n"; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->ptrB = b; // A apunta a B
    b->ptrA = a; // B apunta a A (¡Ciclo!)

    // Cuando se sale de la función, los objetos no se destruyen porque el contador de referencias nunca llega a 0
    return 0;
}


/*
¿Qué ocurre aquí?

    a es un shared_ptr que apunta a un objeto de tipo A.
    b es un shared_ptr que apunta a un objeto de tipo B.
    Luego, a tiene un shared_ptr a b (es decir, a->ptrB = b;), 
    y b tiene un shared_ptr a a (es decir, b->ptrA = a;).

Este es un ciclo de referencias, porque a y b se mantienen vivos mutuamente. 
Como cada uno tiene un shared_ptr al otro, nunca el contador de referencias 
llega a cero, y por lo tanto, los objetos nunca se destruyen. 
Esto provoca una fuga de memoria.

*/