/*
    La palabra clave const especifica que el puntero no se puede modificar después de la 
    inicialización; desde ese momento, el puntero se protege de cualquier modificación.

    La palabra clave volatile especifica que el valor asociado al nombre que va a continuación 
    se puede modificar con acciones que no sean las de la aplicación del usuario. Por consiguiente, 
    la palabra clave volatile es útil para declarar objetos en memoria compartida a los que puedan 
    obtener acceso varios procesos o áreas de datos globales utilizados para la comunicación con 
    rutinas de servicio de interrupción

*/

/*
    Para declarar el objeto al que señala el puntero como const o volatile, utilice una declaración 
    con el formato:
    const char *cpch;
    volatile char *vpch;

    Para declarar el valor del puntero (es decir, la dirección real almacenada en el puntero) como 
    const o volatile, utilice una declaración con el formato:
    char * const pchc;
    char * volatile pchv;

    ------------------
    const char* cpch;   // El contenido al que apunta el puntero es constante (no se puede modificar).
    char* const cpch;  // La dirección almacenada en el puntero es constante (no se puede cambiar).

*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int numero1 = 1;
    int numero2 = 2;

    const int* ptr; // contenido constante
    ptr = &numero1;
    // *ptr = 10;   // no se puede cambiar el contenido del puntero
    ptr = &numero2; // si se puede cambiar la dirección de memoria del puntero

    int* const ptr_x = &numero1; // dirección de memoria constante: requiere inicialiización directa
    // ptr_x = &numero2;         // no se puede cambiar la dirección de memoria
    *ptr_x = 20;                 // si se puede cambiar el contenido
    


    return 0;
}