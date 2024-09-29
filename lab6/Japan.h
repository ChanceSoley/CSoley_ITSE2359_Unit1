#ifndef JAPAN_H
#define JAPAN_H

#include "Country.h"

// Derived class Japan
class Japan : public Country {
public:
    void displayInfo() const override {
        cout << "Country Name: Japan" << endl;
        cout << "Capital: Tokyo" << endl;
        cout << "Population: 126 million" << endl;
    }
};

#endif
