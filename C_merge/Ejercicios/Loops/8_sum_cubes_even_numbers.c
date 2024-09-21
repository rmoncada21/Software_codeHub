#include <stdio.h>
#include <math.h>

int sum_of_cubes(int n);

int main(){
    int limit = 0, suma_total = 0;

    printf("El siguiente programa calcula la suma de números pares hasta el número limite: \n");
    scanf("%i", &limit);

    suma_total = sum_of_cubes(limit);
    printf("Suma total de los cubos es: %i \n", suma_total);
}

int sum_of_cubes(int n){
    int suma = 0, contador = 0, potencia = 0;

    while(contador <= n){
        if(contador%2==0){
            potencia=pow(contador,3);
            suma+=potencia;
            printf("Número par: %i, al cubo: %i \n", contador, potencia);
        }
        contador++;
    }
    return suma;
}
