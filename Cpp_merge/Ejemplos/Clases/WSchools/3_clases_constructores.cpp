#include <iostream>
#include <string>

using namespace std;

class MyClass{
    public:
    /* 
    Los constructores en C++ son funciones especiales dentro de las 
    clases que se utilizan para inicializar objetos cuando se crean. 
    Son una parte fundamental de la programación orientada a objetos 
    (OOP) y tienen un papel clave en la configuración inicial de un
     objeto.
    */
        // Variables
        string escuela, carrera;

        // constructor
        MyClass(){cout <<"Hola Mundo";}
        // constructor usando lista de inicialización 
        MyClass(string escuela, string carrera) : escuela(escuela), carrera(carrera) {}

        // sobrecarga de metodos
        void getClass();
        void getClass(MyClass);
};

void MyClass::getClass(MyClass clase){
    cout << "Escuela: " << clase.escuela;
    cout << "Carrera: " << clase.carrera;
}

void MyClass::getClass(){
    cout << "Escuela: " << escuela << endl;
    cout << "Carrera: " << carrera << endl;
}

int main(int argc, char* argv[]){
    MyClass myObj("Computación", "ingenieria");

    myObj.getClass();

    return 0;
}