#include "Book.h"

int main(){
    Book b1("Harry Potter", "J.K. Rowling");
    Book b2("The Lord of the Rings", "J.R.R. Tolkien");

    b1.borrowBook();

    b1.displayBook();
    b2.displayBook();

    return 0;
}