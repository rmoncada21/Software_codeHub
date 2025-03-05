#include <iostream>

using namespace std;

class Triangle{
    private:
        int lado1;
        int lado2;
        int lado3;

    public:
        // Constructores
        Triangle() { cout<<" Se creó la clase triangulo" << endl;};    
        Triangle(int lado1, int lado2, int lado3) 
            : lado1(lado1), lado2(lado2), lado3(lado3) {
                cout << "Se creó el triangulo con lados: "<<lado1<<" - " << 
                lado2 << " - "<< lado3 << endl;
            }
        // Prototipos de funciones
        void which_triangle_is();
};
void Triangle::which_triangle_is(){
    if( lado1 == lado2 && lado2 == lado3){
        cout << "triangulo equilatero" << endl;
    }else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        cout << "triangulo isósceles"<< endl;
    }else{
        cout << "triangulo escaleno"<< endl;
    }

}

int main(){
    Triangle triangulo1(10, 10, 10);
    triangulo1.which_triangle_is();

    Triangle triangulo2(10, 5, 3);
    triangulo2.which_triangle_is();

    Triangle triangulo3(10, 10, 3);
    triangulo3.which_triangle_is();

    return 0;
}