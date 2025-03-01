#include <iostream>

using namespace std;

class Rectangle{
    private:
        double largo;
        double ancho;

    public:
    // Constructores
    Rectangle() {largo = ancho = 0; cout <<"Creación de Rectangle " << endl;};
    Rectangle(double largo, double ancho) : largo(largo), ancho(ancho) {};

    // Prototipos de funciones
    void get_values(double, double);
    double area();
    double perimetro();
};

// Desarrollo de las funciones
void Rectangle::get_values(double largo, double ancho){
    this->largo = largo;
    this->ancho = ancho;
}

double Rectangle::area(){
    return largo*ancho;
}

double Rectangle::perimetro(){
    return 2*largo+2*ancho;
}

int main(){
    Rectangle rectangulo;
    rectangulo.get_values(4, 2);
    cout<< "El perimetro es: " << rectangulo.perimetro() << endl;
    cout<< "El area es: " << rectangulo.area() << endl;
    return 0;
}