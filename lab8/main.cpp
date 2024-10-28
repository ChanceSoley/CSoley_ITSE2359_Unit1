#include <iostream>
#include <fstream>
#include "Fraction.h"

// Template function to find the maximum of two values
template <typename T>
T findMax(const T& a, const T& b) {
    double valueA = static_cast<double>(a.getNumerator()) / a.getDenominator();
    double valueB = static_cast<double>(b.getNumerator()) / b.getDenominator();
    return (valueA > valueB) ? a : b;
}

// Function to read fractions from an input file and write results to an output file
void processFractions(const std::string &inputFile, const std::string &outputFile) {
    std::ifstream inFile(inputFile);
    std::ofstream outFile(outputFile);
    
    if (!inFile.is_open() || !outFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    Fraction f1, f2;
    while (inFile >> f1 >> f2) {
        Fraction sum = f1 + f2;
        outFile << f1 << " + " << f2 << " = " << sum << "\n";
        
        if (f1 == f2)
            outFile << f1 << " is equal to " << f2 << "\n";
        else
            outFile << f1 << " is not equal to " << f2 << "\n";

        Fraction maxFraction = findMax(f1, f2);
        outFile << "Max of " << f1 << " and " << f2 << " is " << maxFraction << "\n";
        outFile << "-----------------------------------\n";
    }

    inFile.close();
    outFile.close();
}

int main() {
    processFractions("fractions.txt", "results.txt");
    std::cout << "Processing complete. Check results.txt for output." << std::endl;
    return 0;
}
