#include <stdio.h>
#include "car.h"

car_t add_car(){
    car_t car;

    printf("Ingrese el modelo del carro: \n");
    scanf("%49[^\n]", car.model);
    getchar();

    printf("Ingrese la placa del carro: \n");
    scanf("%49[^\n]", car.license_plate);
    getchar();

    printf("Ingrese el monto de renta: \n");
    scanf("%f", &car.rental_perDay);
    

    printf("Ingrese la cantidad de dias de renta: \n");
    scanf("%i", &car.days);
    getchar();

    return car;
}

void mostrar_car(car_t car){
    printf("\nModelo del carro: %s\n", car.model);
    printf("Placa del carro: %s\n", car.license_plate);
    printf("Monto por renta: %f\n", car.rental_perDay);
    printf("Dias de alquiler: %i\n", car.days);
}

void expensive_one(car_t* car){
    printf("\nExpensive");
    float price=car[0].rental_perDay*car[0].days;
    // printf("Dinero: %f\n", price);
    int index=0;

    for(int i=0; i<3; i++){
        float new_price=car[i].rental_perDay*car[i].days;
        
        if(new_price>price){
            price=new_price;
            index=i;
        }
    }
    
    mostrar_car(car[index]);
    printf("Monto= %f", price);
}