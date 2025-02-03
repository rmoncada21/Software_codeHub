#include <iostream>

class Persona {
public:
    std::string nombre;
    int edad;

    Persona(std::string nom, int ed) : nombre(nom), edad(ed) {}

    void mostrar() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};

int main() {
    // la palabra reservada new permite crear una clase con lista de inicialización
    Persona* p = new Persona("Ana", 30); // Creación dinámica

    p->mostrar(); // Acceso con flecha (->)

    delete p; // Liberar memoria
    return 0;
}
