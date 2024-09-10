// Práctica para entendere la variable static de c++
#include <iostream>
using namespace std;

class Empleado{
    private:
        static double tasa_imp;
        int num_id;

    public:
        Empleado(int=0); // constructor
        void desplegar(); // función de acceso
};

// definición del miembro static
double Empleado::tasa_imp = 0.07;

Empleado::Empleado(int id){
    num_id = id;
}

void Empleado::desplegar(){
    cout<<"El Empleado número "<< num_id
    <<" tiene una tasa de impuestos de "<<tasa_imp
    << endl;
}

int main(){
    Empleado e1(1), e2(2);
    e1.desplegar();
    e2.desplegar();
    return 0;
}