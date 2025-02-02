#include <iostream>

using namespace std;

/* Características las variables de acceso

Modificador	    Accesible en la misma clase	       Accesible en clases derivadas	Accesible desde fuera
public	                ✅ Sí	                            ✅ Sí	                    ✅ Sí
protected	            ✅ Sí	                            ✅ Sí	                    ❌ No
private	                ✅ Sí	                            ❌ No	                    ❌ No
*/

// Clase base (se pueden poner atributos que toda clase pueda tener)
class Vehicle{
    public:
        string brand="ford";
        void honk();
};

void Vehicle::honk(){
    cout << "tuu, tuu\n";
}

// Herencia
// clase derivada : clase base
// clase hijo     : clase padre
class Car : public Vehicle{
    public:
        string model="Mustang";
};

int main(int argc, char* argv[]){
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;

}