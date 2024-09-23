// Appliance.h
#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Appliance {
protected:
    string brand;
    double powerUsage;

public:
    // Constructor to initialize attributes
    Appliance(string b, double p) : brand(b), powerUsage(p) {
        cout << "Appliance constructor called for " << brand << endl;
    }

    // Virtual destructor
    virtual ~Appliance() {
        cout << "Appliance destructor called for " << brand << endl;
    }

    // Pure virtual function
    virtual void displayInfo() const = 0;
};

#endif // APPLIANCE_H
