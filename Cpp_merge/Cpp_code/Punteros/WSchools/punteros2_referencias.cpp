#include <iostream>
using namespace std;

/*
✅ La referencia es solo un alias de numero, no una dirección de memoria.
✅ No puede cambiar a otra variable.
❌ NO es un puntero
*/

int main() {
    int numero = 10;
    int& ref = numero; // Referencia que apunta a `numero`

    cout << "Valor de numero: " << numero << endl;  // 10
    cout << "Valor usando referencia: " << ref << endl;  // 10

    ref = 20; // Cambia el valor de `numero`

    cout << "Nuevo valor de numero: " << numero << endl;  // 20

    // No podemos hacer: ref = &otroNumero; (Error: la referencia no puede cambiar)

    return 0;
}
