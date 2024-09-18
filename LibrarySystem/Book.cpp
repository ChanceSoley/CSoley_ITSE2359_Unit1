#include "Book.h"
#include <iostream>

// Constructor
Book::Book(std::string title, std::string author, int year)
    : title(title), author(author), year(year) {}

// Getters
std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

// Setters
void Book::setTitle(const std::string &title) {
    this->title = title;
}

void Book::setAuthor(const std::string &author) {
    this->author = author;
}

void Book::setYear(int year) {
    this->year = year;
}

// Function to display book details
void Book::displayBookInfo() const {
    std::cout << "Title: " << title << ", Author: " << author << ", Year: " << year << std::endl;
}
