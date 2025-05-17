#include <iostream> // libería para entrada y salida estándar

using namespace std; 

class MyClass{
    public:
        int num;
        string name;
        void print() { cout<<"Name: "<<name<<" ---- num: "<<num << endl; };
};

// Funciones externas que reciban clases como parametros

// Función para modificar el objeto con un puntero como parametro
void modified_class(MyClass *eclass){
    cout << "Modificando valores de la clase desde un puntero " << endl;
    eclass->num = 100;
    eclass->name = "eclass";
}

// Función para modificar valores de la clase localmente
void modified_class(MyClass local_class){
    cout << "Se modifican los valores localmente. Externamente no se verán los cambios" << endl;
    local_class.num = 2;
    local_class.name = "local_class";

    local_class.print();
}

int main(int argc, char* argv[]){
    MyClass* myclass = new MyClass{1, "OG_Class"};
    myclass->print();

    // Copiar contenido del puntero myclass
    MyClass new_myclass = * myclass;
    modified_class(new_myclass);
    cout << "Imprimir los valores originales de la clase " << endl;
    new_myclass.print();

    // Modificar los valores verdaderos de la clase
    modified_class(&new_myclass);
    new_myclass.print();


    delete (myclass);

    return 0;
}