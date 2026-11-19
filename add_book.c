#include <stdio.h>
#include <string.h>
#include "library.h"

void addBook()
{
    int id, i;

    if (count >= MAX_BOOKS)
    {
        printf("Library is full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            printf("Book ID already exists!\n");
            return;
        }
    }

    books[count].id = id;

    getchar();

    printf("Enter Book Title: ");
    fgets(books[count].title, 100, stdin);
    books[count].title[strcspn(
        books[count].title, "\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(books[count].author, 100, stdin);
    books[count].author[strcspn(
        books[count].author, "\n")] = '\0';

    books[count].issued = 0;

    count++;

    printf("\nBook added successfully!\n");
}