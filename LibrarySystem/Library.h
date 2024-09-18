#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;

public:
    // Function to add a book to the library
    void addBook(const Book &book);

    // Function to display the contents of the library
    void displayLibrary() const;
};

#endif // LIBRARY_H
