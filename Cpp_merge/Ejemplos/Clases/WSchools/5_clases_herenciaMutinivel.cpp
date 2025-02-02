#include <iostream>

using namespace std;

/* Características las variables de acceso

Modificador	    Accesible en la misma clase	       Accesible en clases derivadas	Accesible desde fuera
public	                ✅ Sí	                            ✅ Sí	                    ✅ Sí
protected	            ✅ Sí	                            ✅ Sí	                    ❌ No
private	                ✅ Sí	                            ❌ No	                    ❌ No
*/

class MyClass{
    public:
        void myFunction(){cout << "MyClass: Clase Base\n";}
};

class MyChild : public MyClass{
    public:
        void childFunction(){cout << "MyChild: Clase hija/derivada\n";}
};

class MyGrandChild : public MyChild{
    public:
        void grandChildFunction(){cout << "MyGrabchild: Clase nieta/derivada "
                               << "de la derivada\n";}
};

int main(){
    MyGrandChild myObjt;
    myObjt.myFunction();
    myObjt.childFunction();
    myObjt.grandChildFunction();

    return 0;
}
