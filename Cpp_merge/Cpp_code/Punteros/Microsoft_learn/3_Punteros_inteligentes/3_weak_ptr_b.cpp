/*
La solución al ejercicio 3_weak_ptrt_a.cpp es usar weak_ptr. Este tipo de puntero 
no aumenta el contador de referencias, por lo que no mantiene vivo al objeto.
*/

#include <iostream>
#include <memory>  // Para usar shared_ptr

class B; // Declaración adelantada

class A {
public:
    std::weak_ptr<B> ptrB; // Ahora es weak_ptr, no incrementa el contador
    ~A() { std::cout << "Destructor de A\n"; }
};

class B {
public:
    std::shared_ptr<A> ptrA; // B sigue teniendo un shared_ptr a A
    ~B() { std::cout << "Destructor de B\n"; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->ptrB = b; // A apunta a B con weak_ptr
    b->ptrA = a; // B tiene un shared_ptr a A

    return 0; // Ahora los destructores se llaman correctamente
}

/*
¿Qué cambia aquí?

ptrB ahora es un weak_ptr en lugar de un shared_ptr.
weak_ptr no mantiene el objeto vivo, así que no crea un ciclo de referencias.
Cuando el shared_ptr a A y el shared_ptr a B se destruyen, los objetos 
se destruyen correctamente.

*/
