/*  Escribir un programa que defina un vector de numeros y calcule
    la suma de sus elementos
*/

#include <iostream>
#include <stdlib.h> //libreria para acceder a la funcion random

using namespace std;


void llenar_vector(int vector[]){
    
    for(int i=0; i<11;i++){
        vector[i]=rand()%10;
    }
    
}

void mostrar_vector(int vector[]){
    for(int i=0; i<11; i++){
        cout<<vector[i]<<", ";
    }
    cout<<endl;
}

void tamano_vector(int vector[]){
    int tamano;

    tamano = sizeof(&vector);
    cout<<"Tamaño del vector es: "<<tamano<<endl;
}

int suma_vectores(int vector[]){
    
    int sumador=0;

    for(int i=0; i<11 ; i++){
        sumador += vector[i];
    }

    return sumador;
}

int main(){
    
    int vector[11];   
    llenar_vector(vector);
    tamano_vector(vector);
    mostrar_vector(vector);
    cout<<suma_vectores(vector)<<endl;
    
    return 0;
}