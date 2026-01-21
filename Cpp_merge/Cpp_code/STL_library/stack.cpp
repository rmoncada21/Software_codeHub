#include <iostream>
#include <stack>

using namespace std;

void agregar(stack<int>& pila, int elementos){
    
    for(int i=0; i<elementos; i++){
        pila.push(i);
        // cout<<i<<endl;
    }
    return;
}

void mostrar_pila(stack<int> pila){

    while(!pila.empty()){
        cout<<pila.top()<<endl;
        pila.pop();

    }
    return;
}

int main() {
    std::stack<int> pila; // se crea vacía 
    agregar(pila, 10);
    mostrar_pila(pila);
    int top = pila.top();
    cout<<"Top: "<<top<<endl;
    return 0;
}