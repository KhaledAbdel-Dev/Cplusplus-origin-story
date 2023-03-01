/*
Program Name: Ch. 1 & 2 Assessment
Written By: Khaled Abdelrahman
Purpose: Hopefully to finish this course with an A+
Date: Feb 28, 2023
*/

#include <iostream> // header file library that allows for input and output functions
#include <cstdlib> // C++ standard library for general utilities
#include <cmath> // header file library that allows for functions to perform mathematical operations
#include <iomanip> // header file library that allows for output manipulation
// gotta include the necessary preprocessor directives, used to resolve the specified directives before any code is compiled

using namespace std; // allows us to use names for our objects and variables

int main(){ // classic body function, wouldn't be C++ without it

    double inkCartridge = 76.76; // variable assigning an item its price, a double is used here for its floating point precision
    double mouse = 12.88; // variable assigning an item its price, a double is used here for its floating point precision
    int cable = 14; // variable assigning an item its price, an int is is used here because the value has no decimal point
    int energyBar = 2; // variable assigning an item its price, an int is is used here because the value has no decimal point

    double taxRate = .0582; // variable assigning the tax rate, a double is used here for its floating point precision

    double avgCost = (inkCartridge + mouse + cable + energyBar) / 4; // variable determining Mary's average item cost before taxes, a double is used here for its floating point precision & the value itself is printed below

    cout << "Receipt for Mary Jackson \n Printer Ink Cartridge: $" << inkCartridge // console output used to print text and the following variables; \n is used to start on a new line
    << "\n Mouse: $" << mouse 
    << "\n Cable: $" << cable 
    << "\n Energy Bar: $" << energyBar 
    << "\n Subtotal: $" << inkCartridge + mouse + cable + energyBar << endl;
    cout << fixed << setprecision(2) << " Taxes: $" << (inkCartridge + mouse + cable) * taxRate // ln 35-36 use a fixed float precision to round off the floating point values of the following variables to 2 decimal places
    << "\n Total: $" << (inkCartridge + mouse + cable) * (taxRate + 1) + energyBar << endl;

    cout << "The average cost of your purchased items is $" << avgCost << " plus applicable taxes." << endl; // console output used to print text and the following variables

    return 0; // classic return call concluding the function, wouldn't be C++ without it
}