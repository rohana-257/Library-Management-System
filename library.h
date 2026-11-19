#ifndef LIBRARY_H
#define LIBRARY_H

#define MAX_BOOKS 100

struct Book
{
    int id;
    char title[100];
    char author[100];
    int issued;
};

extern struct Book books[MAX_BOOKS];
extern int count;

void addBook();
void displayBooks();
void searchBook();
void issueReturnBook();

#endif