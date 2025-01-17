#include <stdio.h>

#include "book.h"

#define LIBRARIE_SIZE 3

int main(){
    book_t book1=create_book();
    book_t book2=create_book();
    book_t book3=create_book();

    // Creación de la libreria
    book_t librarie[LIBRARIE_SIZE]={book1, book2, book3};

    book_t expensive_one=expensive_book(librarie, LIBRARIE_SIZE);
    display_information(expensive_one);
    book_t lowest_one=lowest_book(librarie, LIBRARIE_SIZE);
    display_information(lowest_one);

    return 0;
}

/* ¿Por qué se usa getchar() para limpiar el búfer?

Cuando ingresas datos con scanf, la función deja el carácter 
de nueva línea (\n) en el búfer. Esto ocurre porque scanf 
detiene la lectura al encontrar un espacio, un salto de línea 
o un tabulador, pero no los consume.
Al usar getchar() después de un scanf, consumes ese carácter 
de nueva línea, evitando que interfiera en las siguientes lecturas.

*/