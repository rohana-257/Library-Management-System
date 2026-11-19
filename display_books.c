#include <stdio.h>
#include "library.h"

void displayBooks()
{
    int i;

    if (count == 0)
    {
        printf("\nNo books available!\n");
        return;
    }

    printf("\n----- LIBRARY BOOKS -----\n");

    for (i = 0; i < count; i++)
    {
        printf("\nBook ID: %d", books[i].id);

        printf("\nTitle: %s", books[i].title);

        printf("\nAuthor: %s", books[i].author);

        if (books[i].issued == 0)
            printf("\nStatus: Available\n");
        else
            printf("\nStatus: Issued\n");
    }
}