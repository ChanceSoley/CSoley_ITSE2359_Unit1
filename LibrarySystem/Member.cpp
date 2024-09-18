#include "Member.h"
#include <iostream>

// Constructor
Member::Member(std::string name, int id) : name(name), id(id) {}

// Getters
std::string Member::getName() const {
    return name;
}

int Member::getId() const {
    return id;
}

// Setters
void Member::setName(const std::string &name) {
    this->name = name;
}

void Member::setId(int id) {
    this->id = id;
}

// Function to display member info
void Member::displayMemberInfo() const {
    std::cout << "Member Name: " << name << ", ID: " << id << std::endl;
}
