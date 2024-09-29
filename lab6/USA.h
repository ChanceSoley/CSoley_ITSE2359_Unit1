#ifndef USA_H
#define USA_H

#include "Country.h"

// Derived class USA
class USA : public Country {
public:
    void displayInfo() const override {
        cout << "Country Name: USA" << endl;
        cout << "Capital: Washington, D.C." << endl;
        cout << "Population: 331 million" << endl;
    }
};

#endif
