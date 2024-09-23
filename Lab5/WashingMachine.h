// WashingMachine.h
#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include "Appliance.h"

// Subclass: WashingMachine
class WashingMachine : public Appliance {
private:
    int loadCapacity;  // Capacity in kilograms

public:
    // Constructor that initializes base class and subclass attributes
    WashingMachine(string b, double p, int capacity)
        : Appliance(b, p), loadCapacity(capacity) {
        cout << "WashingMachine constructor called for " << brand << endl;
    }

    // Destructor
    ~WashingMachine() {
        cout << "WashingMachine destructor called for " << brand << endl;
    }

    // Overriding the pure virtual function
    void displayInfo() const override {
        cout << "Washing Machine: " << brand
             << "\nPower Usage: " << powerUsage << " watts"
             << "\nLoad Capacity: " << loadCapacity << " kg" << endl;
    }
};

#endif // WASHINGMACHINE_H
