#include <iostream>

class Persona {
public:
    std::string nombre;
    int edad;

    void mostrar() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};

int main() {
    Persona p1 = {"Juan", 25};  // Objeto normal
    Persona* ptr = &p1;         // Puntero a Persona

    // Accediendo a los miembros usando el puntero
    std::cout << ptr->nombre << std::endl; // Equivalente a (*ptr).nombre
    ptr->mostrar();  // Equivalente a (*ptr).mostrar()

    return 0;
}
