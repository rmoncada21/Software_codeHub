#include <iostream>
#include <string>

using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
        bool isValid;

    public:
        Date() : day(0), month(0), year(0) {cout<<"Date init"<<endl;}
        bool set(int, int, int);
        void get();
        // void mostrar_date();
        bool validate_day(int);
        bool validate_month(int);
        bool validate_year(int);

};

bool Date::validate_day(int day){
    return (day>0 && day <=31);
}

bool Date::validate_month(int month){
    return (month>0 && month <=12);
}

bool Date::validate_year(int year){
    return (year!=0);
}

bool Date::set(int day, int month, int year){
    isValid = validate_day(day) && validate_month(month) && validate_year(year);

    if(isValid){
        this->day=day;
        this->month=month;
        this->year=year;
        return isValid;
    } else {
        cout<<"ERROR en el ingreso de las fechas"<< endl
            <<"fecha ingresada - "
            <<"day: "<<day<<" "
            <<"month: "<<month<<" "
            <<"year: "<<year<<endl;
            return isValid;
    }
}

void Date::get(){
    if(isValid){
        cout<<"dia: "<<this->day<<" "
            <<"mes: "<<this->month<<" "
            <<"año: "<<this->year<<endl;
    } else return;
}

int main(){
    Date fecha;
    Date* fecha_ptr = new Date();

    fecha.set(1, 0, 2026);
    fecha_ptr->set(12, 12, 2026);

    fecha.get();
    fecha_ptr->get();

    delete fecha_ptr;
    return 0;
}