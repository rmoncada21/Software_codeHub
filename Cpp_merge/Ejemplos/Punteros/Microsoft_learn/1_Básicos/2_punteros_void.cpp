/* 
    Cuando se convierte un puntero con tipo en un puntero void, el 
    contenido de la ubicación de memoria no cambia. Sin embargo, se 
    pierde la información de tipo, por lo que no se pueden realizar 
    operaciones de incremento ni de reducción. 

    void* ptr;
*/

#include <iostream>

using namespace std;

class MyClass{
    public:
        int id;
        string name;
        void print(){ cout <<"Nombre de la clase: " << name << " --- id_clase:" << id << endl; }
};

// Funciones externas para modificar los valores de la clase
void modified_class(MyClass* pclass){
    cout << "Modificando el valor de la clase desde un puntero " << endl;
    pclass->id = 100;
    pclass->name = "pclass" ;

    pclass->print();

}

int main(){
    MyClass* myclass = new MyClass{1, "OG_Class"};
    void* ivoid_class = myclass; // conversión implicita de un puntero MyClass a un puntero void
    void* evoid_class = static_cast<void*>(myclass); // Conversión explícita de un puntero MyClass o un puntero void
    
    // ivoid_class.id = 0; no se pude hacer esto porque e puntero es de tipo vvoid
    // volver a pasar el puntero void a punteo MyClass
    MyClass* myclass2 = static_cast<MyClass*>(evoid_class);
    modified_class(myclass2);

    /*
        delete solo puede usarse con punteros que apunten a memoria asignada con new, y no se puede liberar punteros 
        de tipo void* directamente. 
        
        Además, si el puntero es convertido de vuelta a su tipo original, se debe usar 
        delete solo sobre el puntero de ese tipo original.
    */

    // delete (ivoid_class);
    // delete (evoid_class);
    // delete (myclass);
    // delete (myclass2);

    delete (myclass);
    return 0;
}