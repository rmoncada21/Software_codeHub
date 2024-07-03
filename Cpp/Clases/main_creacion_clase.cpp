// main de clase fecha

#include "clase_fecha.h"
using namespace std;

int main() {
    // Declaración de objetos
    Fecha a;
    Fecha b;
    Fecha c(30, 6, 2024);
    
    Fecha d = Fecha(1, 2, 2023);
    c.mostrarFecha();
    d.mostrarFecha();
    c=d;
    
    c.mostrarFecha();
    
    cout<<endl<<"Lo siguiente es para constructor copia"<< endl;
    
    Fecha a1(4, 1, 2007), b1(12, 18, 2008); // usa el constructor
    Fecha c1(a1);
     // usa el constructor de copia
        Fecha d1 = b1;
     // usa el constructor de copia
    cout<< "\nLa fecha almacenada en a es ";
    a1.mostrarFecha();
    cout << "\nLa fecha almacenada en b es ";
    b1.mostrarFecha();
    cout << "\nLa fecha almacenada en c es ";
    c1.mostrarFecha();
    cout << "\nLa fecha almacenada en d es ";
    d1.mostrarFecha();
    cout << endl;
    return 0;    
    return 0;
}