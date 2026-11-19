#include <stdio.h>
#include "library.h"

void searchBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            printf("\nBook Found!");

            printf("\nBook ID: %d", books[i].id);

            printf("\nTitle: %s", books[i].title);

            printf("\nAuthor: %s", books[i].author);

            if (books[i].issued == 0)
                printf("\nStatus: Available\n");
            else
                printf("\nStatus: Issued\n");

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nBook not found!\n");
    }
}