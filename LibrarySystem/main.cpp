#include "Book.h"
#include "Library.h"
#include "Member.h"
#include <iostream>

int main() {
    // Creating instances of books
    Book book1("1984", "George Orwell", 1949);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
    
    // Creating a library and adding books to it
    Library library;
    library.addBook(book1);
    library.addBook(book2);

    // Displaying the library contents
    std::cout << "Library Contents:" << std::endl;
    library.displayLibrary();

    // Creating a member
    Member member("John Doe", 1);

    // Displaying member information
    std::cout << "Library Member:" << std::endl;
    member.displayMemberInfo();

    return 0;
}
