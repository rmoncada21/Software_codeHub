#include <iostream>

using std::cout;
using std::endl;

// template <typename anyType>
template <typename anyType>
class Base{
    public:
    anyType valor;
    Base() {cout<<"Clase base creada"<<endl;}

    anyType sumar(anyType, anyType);
};

template <typename anyType>
anyType Base<anyType>::sumar(anyType valor1, anyType valor2){
    valor = valor1 + valor2;
    return valor;
}

template <typename anyType>
anyType imprimir_clase(){
   
    return;
};

int main(){
    Base<int> base_int;
    int suma_int = base_int.sumar(10, 10);
    cout<<"Suma enteros: "<<suma_int<<endl;

    Base<double> base_double;
    double suma_double = base_double.sumar(10.5, 5.7);
    cout<<"Suma doubles: "<<suma_double<<endl;
    return 0;
}