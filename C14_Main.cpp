/*
Programmer: Ray, Stephen

Course: CSC161

Submission Date: [11/09/2021]

Function definitions used in the C14_Main program.

*/

#include <iostream>
// Include header file C13_Header.h
#include "C14_Header.h"

using namespace std;

int main()
{
    //Instantiate object convertUnits of the conversion class
    conversion convertUnits;

    //Call getter and setter functions to accept and store values for the private variables feet and centimeters
    convertUnits.setFeet();
    convertUnits.getFeet();
    convertUnits.setCenti();
    convertUnits.getCenti();

    //Call the print() function to display results to user
    convertUnits.print();

    return 0;
}
