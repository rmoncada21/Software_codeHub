#include <stdio.h>
#include <string.h>
// #include <stdlib.h>

#include "book.h"

book_t create_book(void){
    book_t book;
    char title[TITLE_SIZE];
    char author[AUTHOR_SIZE];
    float price;

    printf("\nDigite el título del libro: \n");
    scanf("%49[^\n]", title);
    getchar(); // Limpia el '\n' del búfer

    printf("Ingrese el nombre del autor: \n");
    scanf("%49[^\n]", author);
    getchar(); // Limpia el '\n' del búfer

    printf("Ingrese el precio: \n");
    scanf("%f", &price);
    getchar(); // Limpia el '\n' del búfer

    strcpy(book.title, title);
    strcpy(book.author, author);
    book.price=price;
    
    return book;
}

void display_information(book_t book){
    printf("\nTítulo del libro: %s\n", book.title);
    printf("Autor: %s\n", book.author);
    printf("Precio: %lf", book.price);

}

book_t expensive_book(book_t* librarie, int size){
    printf("\nExpensive one");
    book_t book;
    float price=librarie[0].price;
    
    for(int i=0; i<size; i++){
        if(librarie[i].price>price){
            price=librarie[i].price;
            book=librarie[i];
        }
    }

    return book;
}


book_t lowest_book(book_t* librarie, int size){
    printf("\nLowest one");
    book_t book;
    float price=librarie[0].price;
    
    for(int i=0; i<size; i++){
        if(librarie[i].price<price){
            price=librarie[i].price;
            book=librarie[i];
        }
    }

    return book;
}