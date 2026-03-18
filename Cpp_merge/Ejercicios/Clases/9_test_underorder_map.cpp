#include <iostream>
#include <unordered_map>
using namespace std;

struct Estudiante {
    string carrera;
    unordered_map<string, int> materias;
};

int main() {

    unordered_map<string, Estudiante> universidad;

    // Ana Lopez
    universidad["Ana_Lopez"] = {
        "Mecatronica",
        {
            {"Calculo", 95},
            {"Programacion", 98},
            {"Algebra", 92},
            {"Electronica", 90},
            {"Taller", 94}
        }
    };

    // Carlos Perez
    universidad["Carlos_Perez"] = {
        "Ingenieria_Civil",
        {
            {"Calculo", 85},
            {"Fisica", 88},
            {"Resistencia", 82},
            {"Dibujo_Tecnico", 90}
        }
    };

    // Ejemplo de consulta
    cout << "Carrera de Ana: "
         << universidad["Ana_Lopez"].carrera << endl;

    cout << "Nota de Programacion de Ana: "
         << universidad["Ana_Lopez"].materias["Programacion"] << endl;

    return 0;
}