#include <stdio.h>
#include <string.h> // función strcpy
#include <ctype.h>  // función isaplha

#define CHAR_SIZE 50
#define ASCII_SIZE 35

// Hacer función que cuente las vocales y consonantes
// Código ASCII mayusculas 65-90            función is alpha
// Código ASCII minusculas 97-122

// Vocales Mayusculas 65 69 73 79 85
// Vocales Minusculas 97 101 105 111 117

// Diferencia 32
int count_alpha(char* string, int size){
    int contador=0;

    for(int i=0; i<size; i++){
        if(isalpha(string[i])){
            contador++;
        }
    }

    return contador;
}

void count_vowels_consonats(char* string, int size){
    char lower_vocals[]={'a', 'e', 'i', 'o', 'u'};
    char upper_vocals[]={'A', 'E', 'I', 'O', 'U'};
    int vocales_contador=0;

    for(int i=0; i<size; i++){
        char caracter=string[i];
        // printf("Caracter: %c\n", caracter);

        for(int j=0; j<5; j++){
            
            if(caracter==lower_vocals[j] || caracter==upper_vocals[j]){
                vocales_contador++;
                // printf("Contador: %i\n", vocales_contador);
            }
        }
    }

    printf("Número de vocales: %i\n", vocales_contador);
    printf("Números de consonantes: %i\n", count_alpha(string, strlen(string))-vocales_contador);
}


int main(int argc, char* argv[]){
    char string[CHAR_SIZE];
    int string_len=0;

    strcpy(string, argv[1]);
    printf("entrada 2: %s\n", string);
    string_len=strlen(string);
    // printf("Longitud de string: %i\n", string_len);
    printf("Cantidad de letras: %d\n", count_alpha(string, string_len));

    count_vowels_consonats(string, string_len);

}