#include <iostream>
#include <sstream>
#include <vector>
#include "ansi_codes.hpp"
#include "9_student_info_class.cpp"

using namespace std;


int main(){
    Lista_estudiantes lista;
    lista.gestor_stdin();
    lista.mostrar_informacion();
    return 0;
}

// TODO:
// Arreglar funcion mostrar_información
// mostrar información por estudiante
// calcular notas por estudiante
// buscar estudiante
// liberar memoria

// hacer de otra forma, por medio de tablas hash
// tablas hash o unordered_map

// usar ifstream/istream para archivos