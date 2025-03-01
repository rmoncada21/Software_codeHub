#include <iostream>

using namespace std;
// const double PI = .014159;


class Circle{
    private:
        double radio;
        static constexpr double PI = 3.14159;
    public:
        // Constructores
        // Por defecto
        Circle() { radio = 0; cout <<"Creación dei círculo de radio 0 " << endl; }
        // Usando lista de inicialización
        Circle(double radio) : radio(radio) {}

        // Prototipo de funciones
        void get_radio(double);
        double area();
        double circunferencia();
};

// Realizar funciones de la clase

void Circle::get_radio(double radio){
    this->radio = radio;
    cout << "Nuevo radio del circulo: " << radio << endl;
}

double Circle::area(){
    return PI*(radio*radio);
}

double Circle::circunferencia(){
    return 2*PI*radio;
}

int main(int argc, char* argv[]){
    Circle circulo;
    circulo.get_radio(2);
    cout << "Área del circulo: " << circulo.area() << endl;
    cout << "Circunferencia del circulo: " << circulo.circunferencia() << endl;
    return 0;
}