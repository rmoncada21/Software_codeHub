#include <iostream>

using namespace std;

/*
(Declaración de un objeto en la pila)
Aquí, nueva_clase es un objeto de la clase Clase, creado en la pila (stack). 
No es un puntero ni necesita new. Cuando la función o el ámbito donde se declaró 
termine, el objeto se destruirá automáticamente.
*/

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
    Clase miClase0; // Se crea en la pila
    Clase* miClase = new Clase(); // Se crea en el heap

    delete miClase;
    return 0;
}