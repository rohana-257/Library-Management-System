#include <stdio.h>
#include "library.h"

struct Book books[MAX_BOOKS];
int count = 0;

int main()
{
    int choice;

    do
    {
        printf("\n\n===== LIBRARY MANAGEMENT SYSTEM =====");

        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue / Return Book");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueReturnBook();
                break;

            case 5:
                printf("\nThank you for using Library Management System!\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}