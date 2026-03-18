#include <iostream>
#include <cmath>

using namespace std;

class Figura{
    public:
        Figura() {};
        virtual float area() = 0; // pure virtual y clase abstracta
        virtual float perimetro() = 0; // pure virtual y clase abstracta
};

class Circulo : public Figura{
    private:
        float radio;

    public:
        Circulo() { cout<<"Circulo creado"<<endl; };;
        Circulo(float radio) : radio(radio) { cout<<"Circulo creado"<<endl; };
        float area() override {
            return M_PI * radio * radio;
        };
        float perimetro() override {
            return 2*M_PI*radio;
        };

};

class Rectangulo : public Figura{
    private:
        float lado;
        float ancho;

    public:
        Rectangulo() { cout<<"Rectangulo creado"<<endl; };;
        Rectangulo(float lado, float ancho) : lado(lado), ancho(ancho)
            { cout<<"Rectangulo creado"<<endl; };
        float area() override {
            return lado * ancho;
        };
        float perimetro() override {
            return 2*lado + 2*ancho;
        };

};

int main(){
    Circulo* circulo = new Circulo(10.0);
    Rectangulo* rectangulo = new Rectangulo(5.0, 6.0);

    cout<<"circulo area: "<<circulo->area()<<endl;
    cout<<"circulo perimetro: "<<circulo->perimetro()<<endl;
    
    cout<<"rectangulo area: "<<rectangulo->area()<<endl;
    cout<<"rectangulo perimetro: "<<rectangulo->perimetro()<<endl;

    return 0;
}