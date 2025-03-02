#include <iostream>

using namespace std;

class Person{
    private:
        string name;
        int edad;
        string ciudad;

    public:
        // Constructores
        Person(){ cout <<"Se creó Persona" << endl; };
        Person( string name, int edad, string ciudad ) : name(name), edad(edad), ciudad(ciudad) {};

        // Prototipos de funciones
        void set_person_data(string, int, string);
        void get_person_data();
};

void Person::set_person_data(string name, int edad, string ciudad){
    this->name = name;
    this->edad = edad;
    this->ciudad = ciudad;
}

void Person::get_person_data(){
    cout << "Nombre " << name << endl;
    cout << "Edad " << edad << endl;
    cout << "Ciudad " << ciudad << endl;
}

int main(){
    Person persona1;
    persona1.set_person_data("Persona1", 25, "San Jose");
    persona1.get_person_data();
    return 0;
}