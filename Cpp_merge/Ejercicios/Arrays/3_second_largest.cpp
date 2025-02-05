#include <iostream>

using namespace std;

int* char_array_to_int(char** charreglo, int* iarreglo, int size){
    
    for(int i=0; i<size; i++){
        iarreglo[i]=atoi(charreglo[i+1]);
    }

    return iarreglo;
}

void mostrar_arreglo(int* arreglo, int size){

    for(int i=0; i<size; i++){
        cout << arreglo[i] << " - ";
    }

    cout << endl;
}

int find_largest(int* arreglo, int size){
    int largest=*(arreglo);
    int posicion;

    for(int j=0; j<size; j++){
        
        if(largest<*(arreglo+j)) {
            largest=*(arreglo+j);
            posicion=j;
        }

    }
    
    return posicion;
}

int n_largest(int* arreglo, int size, int ntimes){
    int largest=0;
    int contador=0;
    
    while(contador<ntimes){
        int posicion=find_largest(arreglo, size);
        largest=arreglo[posicion];
        arreglo[posicion]=0;
        contador++;
    }

    return largest;
}

// Hacer función para buscar la posición del arreglo y lo cambie por cero

int main(int argc, char* argv[]){
    // Crear arreglo
    int arreglo_size=argc-1;
    int* iarreglo = new int[arreglo_size];

    iarreglo=char_array_to_int(argv, iarreglo, arreglo_size);
    mostrar_arreglo(iarreglo, arreglo_size);

    cout << "Second_largest: " << n_largest(iarreglo, arreglo_size, 2) << endl;


    delete[] iarreglo;
    return 0;
}