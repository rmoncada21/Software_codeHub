#include <iostream>

using namespace std;

/* Características las variables de acceso

Modificador	    Accesible en la misma clase	       Accesible en clases derivadas	Accesible desde fuera
public	                ✅ Sí	                            ✅ Sí	                    ✅ Sí
protected	            ✅ Sí	                            ✅ Sí	                    ❌ No
private	                ✅ Sí	                            ❌ No	                    ❌ No


¿Qué hace el acceso protected en C++?

En C++, el modificador de acceso protected permite que un miembro de la clase:
✅ Sea accesible dentro de la propia clase.
✅ Sea accesible desde clases derivadas (hijas).
❌ No sea accesible desde fuera de la clase (como en main()).

*/

// Base class
class Employee{
    protected: // Protected access specifier
        int salary;
};

// Derived class
class Programmer : public Employee{
    public:
        int bonus;

        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return salary;
        }
};

int main()
{
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;

    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
}