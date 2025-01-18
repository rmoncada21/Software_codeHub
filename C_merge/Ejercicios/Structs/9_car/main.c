#include <stdio.h>
#include "car.h"

int main(){
    car_t car1=add_car();
    car_t car2=add_car();
    car_t car3=add_car();

    mostrar_car(car1);
    mostrar_car(car2);
    mostrar_car(car3);

    car_t expensive_car[3]={car1, car2, car3};
    
    expensive_one(expensive_car);

    return 0;
}