#ifndef INDIA_H
#define INDIA_H

#include "Country.h"

// Derived class India
class India : public Country {
public:
    void displayInfo() const override {
        cout << "Country Name: India" << endl;
        cout << "Capital: New Delhi" << endl;
        cout << "Population: 1.366 billion" << endl;
    }
};

#endif
