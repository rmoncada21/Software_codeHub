#include <iostream>
#include <memory>  // necesario para poder usar unique_ptr<>

using namespace std;

class MyClass{
    public:
        int id;
        string name;

        // constructor
        MyClass() { cout << "Se creó el objeto MyClass " << endl; }
        // Constrcutores con inicialización en linea
        MyClass(int id, string name): id(id), name(name) {}
};

int main(int argc, char* argv[]){
    // MyClass* myclass = new MyClass();
    // unique_ptr<tipo_puntero> nombre_puntero; solo incializa el puntero
    unique_ptr<MyClass> myclass = make_unique<MyClass>(); // declara e inicilizar el puntero
    return 0;
}