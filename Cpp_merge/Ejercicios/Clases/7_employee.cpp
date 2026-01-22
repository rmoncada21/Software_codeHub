#include <iostream>
#include <vector>

using namespace std;

struct Datos{
    string puesto;
    string id;
    int salary_per_hour;
};

class Employee{
    private:
        string puesto;
        string id;
        float salary;
        vector<Datos> info = {
                    // puesto - id - horas
                     {"administrativo", "000AAA", 25}
                    ,{"tecnico", "111BBB", 20}
                    ,{"ing", "222CCC", 30} };

    public:
        Employee() {cout<<"Empleado creado"<<endl;}
        float calculate_salary(int, int, string);
        Datos get_datos();
        Datos get_datos0() const;
};

float Employee::calculate_salary(int horas, int dias, string puesto){

    for(Datos x : info){
        if(x.puesto == puesto){
            this->puesto = x.puesto;
            this->id = x.id;
            this->salary = x.salary_per_hour * horas * dias;
            return salary;
        }
    }

    cout<<"Puesto no encontrado "<<endl;
    salary = 0;

    return salary;
}

Datos Employee::get_datos(){
    Datos local;
    local.puesto = this->puesto;
    local.id = this->id;
    // local.salary = this->salary;
    return local;
}

Datos Employee::get_datos0() const {
    return {puesto, id, 0}; // salary_per_hour no aplica aquí
}

int main(){
    Employee* empleado1 = new Employee();
    Employee* empleado2 = new Employee();
    Employee* empleado3 = new Employee();

    float salario1 = empleado1->calculate_salary(8, 30, "administrativo");
    float salario2 = empleado2->calculate_salary(12, 28, "tecnico");
    float salario3 = empleado3->calculate_salary(10, 27, "ing");

    cout<<"Empleado: "
            <<empleado1->get_datos().puesto
            <<" id: "
            <<empleado1->get_datos().id
            <<" salario: "
            <<salario1<<endl;
    
    cout<<"Empleado: "
            <<empleado2->get_datos().puesto
            <<" id: "
            <<empleado2->get_datos().id
            <<" salario: "
            <<salario2<<endl;

    cout<<"Empleado: "
            <<empleado3->get_datos().puesto
            <<" id: "
            <<empleado3->get_datos().id
            <<" salario: "
            <<salario3<<endl;

    delete empleado1; 
    delete empleado2; 
    delete empleado3;

    return 0;
}