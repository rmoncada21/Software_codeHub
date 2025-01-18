#ifndef CAR_H
#define CAR_H

#define SIZE_ARRAY 50

typedef struct{
    char model[SIZE_ARRAY];
    char license_plate[SIZE_ARRAY];
    float rental_perDay;
    int days;
}car_t;

// Prototipos de funciones
car_t add_car(void);
void mostrar_car(car_t);
void expensive_one(car_t*);

#endif