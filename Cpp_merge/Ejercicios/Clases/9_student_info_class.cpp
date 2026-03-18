#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "ansi_codes.hpp"

using namespace std;

struct Materia_info{
    string curso;
    float nota;
};

class Estudiante{
    private:
        string nombre;
        int id;
        string carrera;
        vector<Materia_info> materia_vector;
    
    public:
        Estudiante() {cout<<"Estudiante creado";};
        void set_nombre_id(string, int);
        void set_carrera(string);
        void set_materia_info(string, float);
        void calculate_notes();
        void mostrar_informacion();

};

void Estudiante::set_nombre_id(string nombre, int id){
    this->nombre = nombre;
    this->id = id;
    return;
}

void Estudiante::set_carrera(string carrera){
    this->carrera = carrera;
    return;
}

void Estudiante::set_materia_info(string curso, float nota){
    materia_vector.push_back({curso, nota});
    return;
}

void Estudiante::mostrar_informacion(){
    for(size_t i=0; i<materia_vector.size(); i++){
        string curso = materia_vector.at(i).curso;
        float nota = materia_vector.at(i).nota;
        cout<<"Curso: "<<curso<<" nota; "<<nota<<endl;
    }
    return;
}

// gestor de estudiantes
class Lista_estudiantes{
    private:
        Estudiante* nuevo_estudiante;
        vector<Estudiante> estudiante_vector;
    public:
        void mostrar_informacion();
        void gestor_stdin();
};

void Lista_estudiantes::gestor_stdin(){
    string linea;
    int contador = 0;

    while(getline(cin, linea)){
        if(linea.empty()) {
            contador++; 
            continue;
        }

        // leer palabra por palabra de la linea
        stringstream ss(linea);
        string token;
        ss>>token;

        if(token=="Estudiante"){
            nuevo_estudiante = new Estudiante();
            string nombre;
            ss>>nombre;
            cout<<endl
                <<ANSI::BLUE
                <<"Nombre: "<<nombre<<ANSI::RESET<<endl;
            
            nuevo_estudiante->set_nombre_id(nombre, contador);
            estudiante_vector.push_back(*nuevo_estudiante);
            // contador++;
        
        } else if(token=="Carrera"){
            string carrera;
            ss>>carrera;
            cout<<ANSI::GREEN
                <<"Carrera: "<<carrera<<ANSI::RESET<<endl;
            // nuevo_estudiante->set_carrera(carrera);
            estudiante_vector.at(contador).set_carrera(carrera);
            // estudiante_vector.back().set_carrera(carrera);
            

        } else {
            string curso = token;
            float nota;
            ss>>nota;
            cout<<ANSI::CYAN
                <<"Curso: "<<curso<<ANSI::RESET<<endl;
            // nuevo_estudiante->set_materia_info(curso, nota);
            estudiante_vector.at(contador).set_materia_info(curso, nota);
            // estudiante_vector.back().set_materia_info(curso, nota);
        }
    // estudiante_vector.push_back(*nuevo_estudiante);  

    }
    
    cout<<ANSI::RED
        <<"FUERA DE LA CLASE Lista_estudiantes"
        <<ANSI::RESET
        <<endl;
    return;
}

void Lista_estudiantes::mostrar_informacion(){
    for(size_t i=0; i<estudiante_vector.size(); i++){
        estudiante_vector[i].mostrar_informacion();
    }
    return;
}