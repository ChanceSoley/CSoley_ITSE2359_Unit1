#include <iostream>
#include <vector>
#include "USA.h"
#include "Japan.h"
#include "Germany.h"
#include "India.h"

int main() {
    vector<Country*> countries;

    // Dynamically allocate derived class objects and add them to the vector
    countries.push_back(new USA());
    countries.push_back(new Japan());
    countries.push_back(new Germany());
    countries.push_back(new India());

    // Range-based for loop to call displayInfo() using polymorphism
    for (Country* country : countries) {
        country->displayInfo();
        cout << endl;
    }

    // Free allocated memory
    for (Country* country : countries) {
        delete country;
    }

    return 0;
}
