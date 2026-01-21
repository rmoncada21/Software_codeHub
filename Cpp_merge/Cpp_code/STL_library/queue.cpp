#include <iostream>
#include <queue>

using namespace std;

void agregar(queue<int>& fifo, int elementos){

    for(int i=0; i<elementos; i++){
        fifo.push(i);
    }

    return;
}

void desencolar(queue<int> fifo){
    size_t size = fifo.size();

    for(size_t i=0; i<size; i++){
        cout<<fifo.front()<<endl;
        fifo.pop();
    }
    return;
}

void desencolar2(queue<int> fifo){
    while(!fifo.empty()){
        cout<<fifo.front()<<endl;
        fifo.pop();
    }
    return;
}

int main(){
    queue<int> fifo;

    agregar(fifo, 10);
    desencolar(fifo);
    // desencolar2(fifo);
    cout<<endl;

    return 0;
}