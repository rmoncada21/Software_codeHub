#include <iostream>
#include <string>

using namespace std;

// Clase padre
class Persona {
    public:
    // Atributos
    string nombre;
    int edad;

    // Métodos
    void saludar() {
    cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }
};

// Clase hijo

class Estudiante : public Persona {
    public:
    // Atributos
    string carrera;

    // Métodos
    void estudiar() {
    cout << "Estoy estudiando " << carrera << "." << endl;
    }
};



int main() {
    Estudiante estudiante1;

    // Notar que nombre y edad se crearon en la clase persona
    // pero aun asi pertenecen/son accesibles desde clase estudiante
    estudiante1.nombre = "María López";
    estudiante1.edad = 25;
    estudiante1.carrera = "Ingeniería Informática";

    estudiante1.saludar();
    estudiante1.estudiar();

    return 0;
}