// Refrigerator.h
#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include "Appliance.h"

// Subclass: Refrigerator
class Refrigerator : public Appliance {
private:
    double volume;  // Volume in liters

public:
    // Constructor that initializes base class and subclass attributes
    Refrigerator(string b, double p, double v)
        : Appliance(b, p), volume(v) {
        cout << "Refrigerator constructor called for " << brand << endl;
    }

    // Destructor
    ~Refrigerator() {
        cout << "Refrigerator destructor called for " << brand << endl;
    }

    // Overriding the pure virtual function
    void displayInfo() const override {
        cout << "Refrigerator: " << brand
             << "\nPower Usage: " << powerUsage << " watts"
             << "\nVolume: " << volume << " liters" << endl;
    }
};

#endif // REFRIGERATOR_H
