#include <iostream>

using namespace std;

// Sobrecarga de funciones
void mostrar_arreglo(char** charreglo, int size){
    cout << "Arreglo tipo char\n";
    
    for(int i=0; i<size; i++){
        cout << *(charreglo+i+1) << " - ";
    }

}

void mostrar_arreglo(int* arreglo, int size){
    cout << "\nArreglo tipo int\n";   

    for(int i=0; i<size; i++){
        cout << arreglo[i] << " - ";
    }
}

int* char_array_to_int(char** charreglo, int size){
    cout << "\n Entra al chat to int \n";
    int* iarreglo= new int[size];

    for(int i=0; i<size; i++){
        iarreglo[i]=atoi(charreglo[i+1]);
    }

    cout << "\n Sale del chat to int \n";
    return iarreglo;
}

int contador_de_elementos(int* arreglo, int size){
    int dato_cantidad=-1;
    int contador;
    int indice;
    int dato;

    for(int i=0; i<size; i++){
        dato=*(arreglo+i);
        
        // Reinicar contador para cada dato
        contador=0;
        for(int j=0; j<size; j++){
            int dato_actual=*(arreglo+j);

            if(dato==dato_actual){
                contador++;
            }
        }

        if(contador>dato_cantidad){
            indice=i;
            dato_cantidad=contador;
        }
    }
    
    return *(arreglo+indice);
}

int main(int argc, char* argv[]){
    cout <<"Funcion main\n" ;
    int array_size = argc-1;
    int* iarreglo =  new int[array_size];

    mostrar_arreglo(argv, array_size);
    iarreglo=char_array_to_int(argv, array_size);
    cout << "Despues de la conversion\n";
    mostrar_arreglo(iarreglo, array_size);

    int mas_frecuente = contador_de_elementos(iarreglo, array_size);
    cout << "\nEl elemento que mas se repite es: " << mas_frecuente << endl;

    delete[] iarreglo;
    return 0;
}