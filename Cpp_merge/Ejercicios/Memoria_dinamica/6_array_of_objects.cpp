#include <iostream>

#define ARRAY_SIZE 3
using namespace std;

// Creación de la clase
class MyClass{
    public:
        int id;
        string name;

        // Constructor
        // MyClass(){cout<<"Creación de MyClass" << endl;}
        MyClass() : id(0), name("Sin nombre") {cout<<"Creación de MyClass" << endl;}
};

// Clase para manejar el arreglo de clases
class MyClass_array{
    private:
        MyClass* clase; // puntero al arreglo dinámico 
        int array_size;

    public:
        // Constructor
        MyClass_array(int ex_size) : array_size(ex_size) { clase = new MyClass[array_size]; }
        // Destructor
        ~MyClass_array(){ delete[] clase; }

        // Métodos -  prototipos
        void set_data(int, int, string);
        void cout_data();
};

// Método para insertar datos
void MyClass_array::set_data(int pos, int id, string name){
    if(pos >= 0 && pos < array_size){
        clase[pos].id = id;
        clase[pos].name = name;
    }
}

// Método para mostrar los objetos
void MyClass_array::cout_data() {
        
        for (int i = 0; i < array_size; i++) {
            cout << "ID: " << clase[i].id << ", Name: " << clase[i].name << endl;
        }

}

typedef MyClass myclass_t;

int main(int argc, char* argv[]){
    MyClass_array arreglo_clase(ARRAY_SIZE);
    
    // Modificar datos usando los métodos internos
    arreglo_clase.set_data(0, 1, "Objeto 1");
    arreglo_clase.set_data(1, 2, "Objeto 2");
    arreglo_clase.set_data(2, 3, "Objeto 3");

    arreglo_clase.cout_data();

    // delete [] clase;
    return 0;
}