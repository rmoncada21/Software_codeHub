#include <iostream>

using namespace std;

class Car{
    private:
        string concesionaria;
        string modelo;
        int year;

    public:
        // Constrcutores
        Car(){ cout <<"Se creó la clase carro" << endl; };
        Car(string concesionaria, string modelo, int year) : 
            concesionaria(concesionaria), modelo(modelo), year(year) {};
        
        // Prototipos de funciones
        void set_car_data(string, string, int);
        void get_car_data();
};

void Car::set_car_data(string concesionaria, string modelo, int year){
    this->concesionaria = concesionaria;
    this->modelo = modelo;
    this->year = year;
}

void Car::get_car_data(){
    cout << "Concesionaria: " << concesionaria << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Year: " << year << endl;
}

int main(){
    Car pickup;
    pickup.set_car_data("Purdy", "Toyota Hilux", 2024);
    pickup.get_car_data();

    return 0;
}