#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int* ptr=nullptr;
    int numero=5;

    ptr=&numero;

    int copia_numero=*ptr;

    cout << "Numero: " << numero << endl;
    cout << "Dirección: " << ptr << endl;
    cout << "Contenido *ptr: " << *ptr << endl;
    cout << "Contenido copia_numero: " << copia_numero << endl;
    return 0;
}