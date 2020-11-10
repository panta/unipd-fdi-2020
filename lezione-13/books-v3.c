/*
 * compile:
 *   $ gcc -std=c99 -Wall -Wextra -pedantic -Wstrict-prototypes -Wconversion -Werror -o books-v1 books-v1.c
 *
 * run:
 *   $ ./books-v1
 */

#include <stdio.h>

#define MAX_NAME_LEN    30
#define MAX_TITLE_LEN   80
#define MAX_AUTHORS     4

typedef struct person
{
    char name[MAX_NAME_LEN + 1];
    char last_name[MAX_NAME_LEN + 1];
    int birth_year;
} person_t;

typedef struct book
{
    char title[MAX_TITLE_LEN + 1];
    person_t *author[MAX_AUTHORS];
    int n_authors;
    int year;
    int n_pages;
    double price;
} book_t;

void print_person(const person_t *person) {
    printf("%s %s", person->name, person->last_name);
}

void print_book(const book_t *book) {
    printf("\"%s\"\n", book->title);
    printf("by: ");
    for (int i = 0; i < book->n_authors; i++) {
        print_person(book->author[i]);
        printf(((i + 1) < book->n_authors) ? ", " : "\n");
    }
    printf("year %d\n", book->year);
    printf("%d pages, %g EUR\n", book->n_pages, book->price);
    printf("\n");
}

int main(void) {
    person_t brian_w_kernighan = { "Brian W.", "Kernighan", 1942 };
    person_t dennis_ritchie = { "Dennis", "Ritchie", 1941 };
    book_t k_and_r = {
        "The C Programming Language",
        { &brian_w_kernighan, &dennis_ritchie },
        2, 1978, 228, 31.50
    };

    person_t aldous_huxley = { "Aldous", "Huxley", 1894 };
    book_t brave_new_world = {
        "Brave New World",
        { &aldous_huxley },
        1, 1932, 311, 9.9
    };

    book_t *books[] = {
        &k_and_r,
        &brave_new_world
    };

    for (int i = 0; i < (int)(sizeof(books) / sizeof(book_t *)); i++)
        print_book(books[i]);

    return 0;
}
