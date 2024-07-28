// Declaración de clase

#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Fecha{
    private:
        // Miembro de datos
        int mes;
        int dia;
        int anio;
    
    public:
        /* Funciones miembro */
        
        // Constructor inicialización base/miembro
        // Fecha();

        // Constructores
        Fecha(int= 7, int= 4, int= 2005); // constructor por defecto   
        // Fecha(int, int, int); // constructor

        Fecha(long); // constructor sobrecargado


        // operador por asignación
        void operator=(Fecha&);

        // Coonstructor copia
        Fecha(const Fecha& fechavieja);


        // función miembro
        void estFecha(int, int, int);
        void mostrarFecha(); 
};

#endif