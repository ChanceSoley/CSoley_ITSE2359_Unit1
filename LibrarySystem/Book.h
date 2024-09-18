#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    // Constructor
    Book(std::string title, std::string author, int year);

    // Getters
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;

    // Setters
    void setTitle(const std::string &title);
    void setAuthor(const std::string &author);
    void setYear(int year);

    // Function to display book details
    void displayBookInfo() const;
};

#endif // BOOK_H
