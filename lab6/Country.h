#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
using namespace std;

class Country {
public:
    virtual void displayInfo() const = 0;  // Pure virtual function
    virtual ~Country() {  // Virtual destructor
        cout << "Country destructor called" << endl;
    }
};

#endif
