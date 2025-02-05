#include <iostream>

const int ARRAY_SIZE = 10;
using namespace std;

// Sobrecarga de funciones - mostrar_arreglo
void mostrar_arreglo(char** arreglo, int size){

    for(int i=1; i<size; i++){
        cout << *(arreglo+i) <<" - ";
    }
}

void mostrar_arreglo(int* arreglo, int size){

    for(int i=0; i<size; i++){
        cout << *(arreglo+i) <<" - ";
    }
}

int* char_array_to_int(char** argv, int size){
    int* iarreglo = new int[size];
    
    for(int i=0; i<size; i++){
        *(iarreglo+i)=atoi(argv[i+1]);
    }

    return iarreglo;
}

int largest_number(int* arreglo, int size){
    int largest=*(arreglo);

    for(int i=0; i<size; i++){
        if(*(arreglo+i)>largest) largest=*(arreglo+i);
    }
    
    return largest;
}


int main(int argc, char* argv[]){
    int* iarreglo=nullptr;

    cout << "Arreglo char\n";
    mostrar_arreglo(argv, argc);
    iarreglo=char_array_to_int(argv, argc-1);
    
    cout << "\nArreglo int\n"<< endl;
    mostrar_arreglo(iarreglo, argc-1);
    cout << "\nLargest number: " << largest_number(iarreglo, argc-1) << endl;
    delete[] iarreglo;
    return 0;
}