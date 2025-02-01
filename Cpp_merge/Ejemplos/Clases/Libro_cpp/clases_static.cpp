// Atributos y Métodos Estáticos en una Clase

#include <iostream>

class EjemploStatic {
public:
    // Atributo estático
    static int contador;

    // Método estático
    static void incrementarContador() {
        contador++;
    }
};

// Inicialización del atributo estático
int EjemploStatic::contador = 0;

int main() {
    // Llamar al método estático sin crear una instancia
    EjemploStatic::incrementarContador();
    std::cout << "Contador: " << EjemploStatic::contador << std::endl; // Imprime: Contador: 1

    EjemploStatic obj1, obj2;
    obj1.incrementarContador();
    obj2.incrementarContador();
    std::cout << "Contador: " << EjemploStatic::contador << std::endl; // Imprime: Contador: 3

    return 0;
}
