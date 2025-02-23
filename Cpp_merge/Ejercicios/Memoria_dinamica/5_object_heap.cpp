#include <iostream>

using namespace std;

class Clase{
    public:
        string nombre_clase;

        // Constructor
        // Constructor usando lista de inicialización
        Clase(){cout<<"creando nueva Clase";}
        Clase(string nombre_clase) : nombre_clase(nombre_clase) {};

        // Métodos
        void set_class_name(string name);
        void get_class_name();
};

void Clase::set_class_name(string name){
    nombre_clase=name;
}

int main(int argc, char* argv[]){
    int* entero = new int();
    Clase* miClase = new Clase();

    return 0;
}