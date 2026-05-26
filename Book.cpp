#include "Book.h"

Book::Book(string t, string a){
    title = t;
    author = a;
    available = true;
}

void Book::borrowBook(){
    available = false;
}

void Book::returnBook(){
    available = true;
}

void Book::displayBook(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    if(available){
        cout << "Available Book" << endl;
    }
    else{
        cout << "Book is not available" << endl;
    }

    cout << endl;
}