#include <stdio.h> //biblioteca estándar de C
#include <stdbool.h>
#include <assert.h> //define la macrodepuración


/* pseudocódigo

Read weight in kilograms 
Read height in centimeters

If is weight and height is valid
    Create bmi as weight / height^2

Else 
    print invaldid data
    .
    .
    . seguir pseudocódigo

 */


int main(void){
    /* FILE* file = fopen("nombre_arhivo.txt", "r");   //forma de abrir un archivo
    fscanf(file, "%d", &entero); */
    
    while (classify_person()) {

    }
    
    return 0;
}

bool classify_person(void);

// procedure Main:
//   While there is data do
//     Classify person

// procedure Classify person:
bool classify_person(void) {
    // Read mass in kilograms
    double mass = 0.0;
    // Read height in centimeters
    double height = 0.0;
    if (scanf("%lg %lg", &mass, &height) == 2) {
    // Print mass, height
        printf("%.2lf %.2lf", mass, height);
        // If mass is valflid and height is valid then
        if (is_mass_valid(mass) && is_height_valid(height)) {
            // Create body mass index as mass / height^2
            const double bmi = mass / (height * height);
            // Create nutritional state as the result of classifying the body mass index
            // no modifica ni el puntero no la constante
            const char* const nutrition_state = class_body_mass_index(bmi);
            // Print body mass index, nutritional state
            printf("%.2lf %s\n", bmi, nutrition_state);
        }else{
        // Print invalid data
        printf("invalid data \n")
    }
    //continue readinf the next person
    return true;

    } else {
        // 
        return false;
    }
}

// function Is mass valid:
bool is_mass_valid(double mass) {
    //   return mass > 0 and mass <= 1000
    return mass > 0 && mass <=1000;
}

// function Is height valid:
bool is_height_valid (double height) {
    //   return height > 0 and height <= 300
    return height > 0 && height <=300;
}

// function Classify the body mass index (bmi):
const char* class_body_mass_index(double bmi) {
//   If bmi < 18.5 then
    if (bmi < 18.5 then) {
        return "underwight"
    }
//     return "underweight"

//   If bmi < 25 then
    if( bmi < 25 ){ 
        return "normal"
    }
//   If bmi < 30 then
    if (bmi < 30) {
        return "overweight"
    }
//     return "overweight"
//   return "obese"
}