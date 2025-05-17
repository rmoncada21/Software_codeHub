#include <iostream>
#include <memory> // Necesario para usar shared_ptr

using namespace std;

class MyClass {
public:
    MyClass() { cout << "Objeto MyClass creado." << endl; }
    ~MyClass() { cout << "Objeto MyClass destruido." << endl; }
};

int main() {
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>(); // Crea un shared_ptr que gestiona MyClass

    {
        shared_ptr<MyClass> ptr2 = ptr1; // ptr2 comparte la propiedad del objeto con ptr1
        cout << "Número de referencias: " << ptr1.use_count() << endl; // Muestra cuántos shared_ptr lo usan
    } // ptr2 sale de su ámbito, pero el objeto NO se destruye porque ptr1 sigue existiendo

    cout << "Número de referencias después de salir del bloque: " << ptr1.use_count() << endl;

    return 0; // Aquí ptr1 se destruye y el objeto también
}
