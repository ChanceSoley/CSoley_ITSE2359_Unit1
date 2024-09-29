#ifndef GERMANY_H
#define GERMANY_H

#include "Country.h"

// Derived class Germany
class Germany : public Country {
public:
    void displayInfo() const override {
        cout << "Country Name: Germany" << endl;
        cout << "Capital: Berlin" << endl;
        cout << "Population: 83 million" << endl;
    }
};

#endif
