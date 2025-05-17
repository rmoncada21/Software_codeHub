#include <iostream>
using namespace std;

/* Características las variables de acceso

Modificador	    Accesible en la misma clase	       Accesible en clases derivadas	Accesible desde fuera
public	                ✅ Sí	                            ✅ Sí	                    ✅ Sí
protected	            ✅ Sí	                            ✅ Sí	                    ❌ No
private	                ✅ Sí	                            ❌ No	                    ❌ No
*/

class MyClass
{
    public:    // Public access specifier
        int x; // Public attribute

    // Encapsular datos
    private:
        int y; // Atributo privado

    public:
        // Constructor
        MyClass() { y = 0; }

        // Setter (modifica el atributo privado)
        void setY(int);

        // Getter (obtiene el valor del atributo privado)
        int getY();
};

void MyClass::setY(int value){
    y = value;
}

int MyClass::getY(){
    return y;
}

int main()
{
    MyClass myObj;
    myObj.x=10;     // Modificar x
    myObj.setY(50); // Modificar y
    cout << "El valor de x es: " << myObj.x << endl;
    cout << "El valor de y es: " << myObj.getY() << endl; // Acceder a y
    return 0;
}
