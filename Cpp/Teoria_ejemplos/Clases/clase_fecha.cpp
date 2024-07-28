// Construcción de una clase
// Implementación de las funciones de clase Fecha

#include "clase_fecha.h"

/*
El puntero this en C++ es un puntero implícito a la instancia 
actual de la clase dentro de sus funciones miembro. 
Se utiliza para referenciar los miembros (variables y funciones) 
de la clase desde dentro de sus funciones miembro, especialmente 
cuando hay ambigüedad entre los nombres de los parámetros y los 
nombres de los miembros de la clase.
*/

// Constructor inicialización base/miembro
// Fecha::Fecha() : mes(1), dia(1), anio(2000) {}


// Constructores

Fecha::Fecha(int mes, int dia, int anio): mes(mes), dia(dia), anio(anio){}

// Fecha::Fecha(int mes, int dia, int anio){
//     this->mes=mes;
//     this->dia=dia;
//     this->anio=anio;
// }

// Constructor sobrecargado
Fecha::Fecha(long amd){
    anio = int(amd/10000.0); // extrae el anio
    mes = int((amd - anio * 10000.0)/100.00 ); // extrae el mes
    dia = int(amd - anio * 10000.0 - mes * 100.0); // extrae el dia
}

// Operadores por asignación
void Fecha::operator=(Fecha& fechanueva){
    dia = fechanueva.dia;// asigna el dia
    mes = fechanueva.mes;// asigna el mes
    anio = fechanueva.anio;// asigna el año
    return;
}

// Constructor copia
Fecha::Fecha(const Fecha& fechavieja){
    this->dia = fechavieja.dia;
    this->mes = fechavieja.mes;
    this->anio = fechavieja.anio;
}

void Fecha::estFecha(int mes, int dia, int anio){
    this->mes=mes;
    this->dia=dia;
    this->anio=anio;
    return;
}

void Fecha::mostrarFecha() {
    cout << "La fecha es: ";
    cout << setfill('0')
         << setw(2) << mes << '/'
         << setw(2) << dia << '/'
         << setw(2) << anio % 100; // extrae los últimos dos dígitos del año
    cout << endl;
}