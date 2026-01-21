#include <iostream>
#include <vector>

using namespace std;

struct Data{
    int id;
    int dato;
};

void mostrar_vector(vector<Data> vector){

    for(size_t i=0; i<vector.size(); i++){
        cout<<"id: "<<vector[i].id<<" dato: "<<vector[i].dato<<endl;
    }

    return;
}

void agregar_datos(vector<Data>& vector, int n){
    int i=0;
    
    while(i<n){
        vector.push_back({i, i*i});
        i++;
    }

    return;
}

int main(){
    vector<Data> stl_vector = {{1, -1}, {2, -1}};

    mostrar_vector(stl_vector);
    cout<<endl;
    agregar_datos(stl_vector, 10);
    mostrar_vector(stl_vector);

    Data datos = stl_vector[0];
    cout<<endl<<"id: "<<datos.id;
    return 0;
}