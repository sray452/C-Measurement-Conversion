/*
Programmer: Ray, Stephen

Course: CSC161

Submission Date: [11/09/2021]

Function definitions used in the C14_Main program.

*/

#include "C14_Header.h"
#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

//Setter function setFeet()
void conversion::setFeet()
{
    //Declare local variables and initialize them
    double f = 0;
    double i = 0;
    string error = "A";

    //Display message to user
    cout << "This program converts a length measurement in feet and inches into centimeters.\n\n";
    cout << "Enter a length in feet and inches.\n";

    //Try statement will execute and throw exceptions if encountered
    try
    {
        cout << "Feet: ";
        cin >> f;

        //If the value entered is not a number an exception is thrown
        if (cin.fail())
        {
            //Clear cin stream
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            throw error;
        }

        //If f is not positive, than an exception is thrown
        if (f < 0)
        {
            throw f;
        }

        cout << "Inches: ";
        cin >> i;

        //If the value entered is not a number and exception is thrown
        if (cin.fail())
        {
            //Clear cin stream
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            throw error;
        }

        //If i is not positive, than an exception is thrown
        if (i < 0)
        {
            throw i;
        }

    }

    //Catch statement catches exceptions of double data type (f and i)
    catch(double e)
    {
        //Use while statement to ensure that input received is not negative and is a number
        while(cin.fail() || f < 0 || i < 0)
        {
            //Clear cin stream
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            cout << endl;

            cout << "Catch Statement 1:" << endl;
            cout << "You must enter a non-negative number for the length measurements." << endl;

            cout << "Feet: ";
            cin >> f;
            cout << "Inches: ";
            cin >> i;
        }
    }

    //Catch statement catches exception of string data type (error)
    catch(string r)
    {
        cout << "Catch Statement 2:" << endl;
        cout << "You must enter a non-negative number for the length measurements." << endl;

        cout << "Feet: ";
        cin >> f;
        cout << "Inches: ";
        cin >> i;

        //Use while statement to ensure that the input received is non negative and is a number
        while(cin.fail() || f < 0 || i < 0)
        {
            //Clear cin stream
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            cout << endl;

            cout << "Catch Statement 2:" << endl;
            cout << "You must enter a non-negative for the length measurements." << endl;

            cout << "Feet: ";
            cin >> f;
            cout << "Inches: ";
            cin >> i;
        }
    }

    //Catch statement catches any other unexpected error and displays a message to the user
    catch(...)
    {
        cout << "Catch Statement 3:" << endl;
        cout << "Unexpected error encountered." << endl;
        exit(0);
    }

    //Calculate the total feet in the length measurement and assign it to the feet private variable
    feet = f + (i/12);
}

//The getFeet() function returns the private feet variable
double conversion::getFeet() const
{
    return feet;
}

//The setCenti() function calculates the length measurement in centimeters and assigns this value to the centimeters private variable
void conversion::setCenti()
{
    double c = 0;

    c = feet * 30.48;

    centimeters = c;
}

//The getCenti() function returns the centimeters private variable
double conversion::getCenti() const
{
    return centimeters;
}

//The print() function displays pertinent results to the user
void conversion::print() const
{
    cout << "\n------------------------" << endl;
    cout << "RESULTS" << endl;
    cout << "------------------------" << endl;

    cout << "A length of " << feet << " feet is " << centimeters << " in centimeters." << endl;
}

//Constructor rectangleType() initializes the private variables of the rectangleType class
conversion::conversion()
{
    feet = 0;
    centimeters = 0;
}

