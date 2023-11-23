#include <stdio.h>

/* Usando punteros a funciones */
// void promedio(float*, int, int);

// int main(){

//     int a=0,b=0;
//     float resultado = 0;      /*Resultado del promedio*/
//     float* puntero_resultado; 
//     puntero_resultado = &resultado; /* Direccion*/

//     printf("\nIngrese un numero entero ");
//     scanf("%i", &a);
    

//     printf("\nIngrese un numero entero ");
//     scanf("%i", &b);

//     promedio(puntero_resultado, a, b);

//     printf("\nEl promedio entre %i y %i es %f\n", a, b, resultado);
    
// }

// void promedio(float* pr, int numero1, int numero2){

//     *pr =((float)numero1+(float)numero2)/2;
    
//     return;
// }


/* Punteros a funcion */

int multiplicacion(int, int);
int division(int, int);

void main(){
    int numero1 = 20, numero2 = 5;
    int resultado = 0;
    int (*puntero_a_funcion)(int, int);  // puntero a función
    
    puntero_a_funcion = multiplicacion;
    resultado = puntero_a_funcion(numero1, numero2);
    printf("\nProducto de %i y %i es: %i\n",numero1, numero2, resultado);

    puntero_a_funcion = division;
    resultado = puntero_a_funcion(numero1, numero2);
    printf("\nLa division entre %i y %i es: %i\n",numero1, numero2, resultado);

}


int multiplicacion(int n1, int n2){
    int mult = n1*n2;
    return mult;
}

int division(int n1, int n2){
    int div = n1/n2;
    return div;
}