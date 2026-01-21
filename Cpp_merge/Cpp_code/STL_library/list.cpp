#include <iostream>
#include <list>

using namespace std;

void add_back(list<int>& lista, int add){
    int contador=0;

    while(contador<add){
        lista.push_back(contador);
        contador++;
    }
    return;
}

void add_front(list<int>& lista, int add){
    int contador=0;

    while(contador<add){
        lista.push_front(contador);
        contador++;
    }
    return;
}

void mostrar_lista(list<int> lista){
    cout<<endl;
    // equivalente al foreach en bash
    for(int i : lista){
        cout << i <<endl;
    }
}

int main(){
    list<int> lista;
    add_back(lista, 10);
    mostrar_lista(lista);
    add_front(lista, 10);
    mostrar_lista(lista);
    return 0;
}