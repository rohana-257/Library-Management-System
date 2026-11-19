#include <stdio.h>
#include "library.h"

void issueReturnBook()
{
    int id, choice, i;

    printf("\nEnter Book ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            printf("\n1. Issue Book");
            printf("\n2. Return Book");

            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                if (books[i].issued == 0)
                {
                    books[i].issued = 1;
                    printf("\nBook issued successfully!\n");
                }
                else
                {
                    printf("\nBook is already issued!\n");
                }
            }
            else if (choice == 2)
            {
                if (books[i].issued == 1)
                {
                    books[i].issued = 0;
                    printf("\nBook returned successfully!\n");
                }
                else
                {
                    printf("\nBook is already available!\n");
                }
            }
            else
            {
                printf("\nInvalid choice!\n");
            }

            return;
        }
    }

    printf("\nBook not found!\n");
}