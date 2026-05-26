#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {

private:
    string title;
    string author;
    bool available;

public:
    Book(string t, string a);

    void borrowBook();
    void returnBook();
    void displayBook();

};

#endif