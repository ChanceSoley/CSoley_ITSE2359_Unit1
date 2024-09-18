#include "Library.h"
#include <iostream>

// Function to add a book to the library
void Library::addBook(const Book &book) {
    books.push_back(book);
}

// Function to display the contents of the library
void Library::displayLibrary() const {
    for (const auto &book : books) {
        book.displayBookInfo();
    }
}
