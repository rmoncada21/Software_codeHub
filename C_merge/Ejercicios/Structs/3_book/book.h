#ifndef BOOK_H
#define BOOK_H

#define TITLE_SIZE 50
#define AUTHOR_SIZE 50

typedef struct book{
    char title[TITLE_SIZE];
    char author[AUTHOR_SIZE];
    float price;

}book_t;

book_t create_book(void);
void display_information(book_t);
book_t expensive_book(book_t*, int);
book_t lowest_book(book_t*, int);

#endif