#include <iostream>

using namespace std;

/* Características las variables de acceso

Modificador	    Accesible en la misma clase	       Accesible en clases derivadas	Accesible desde fuera
public	                ✅ Sí	                            ✅ Sí	                    ✅ Sí
protected	            ✅ Sí	                            ✅ Sí	                    ❌ No
private	                ✅ Sí	                            ❌ No	                    ❌ No
*/

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Hola Mundo desde la MyClass.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Hola Mundo desde la MyOtherClass.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}