// main.cpp
#include "WashingMachine.h"
#include "Refrigerator.h"

int main() {
    // Creating objects of subclasses
    WashingMachine wm("LG", 1500, 7);    // Brand, PowerUsage, LoadCapacity
    Refrigerator fridge("Samsung", 200, 300);  // Brand, PowerUsage, Volume

    // Calling overridden methods
    wm.displayInfo();
    cout << endl;
    fridge.displayInfo();
    cout << endl;

    // Demonstrating polymorphism with base class pointer
    Appliance* appliancePtr;

    appliancePtr = &wm;
    appliancePtr->displayInfo();  // Calls WashingMachine's displayInfo()
    cout << endl;

    appliancePtr = &fridge;
    appliancePtr->displayInfo();  // Calls Refrigerator's displayInfo()
    cout << endl;

    return 0;
}
