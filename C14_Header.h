/*
Programmer: Ray, Stephen

Course: CSC161

Submission Date: [11/09/2021]

Header file for the C14 homework problem.

*/

#ifndef C14_HEADER_H
#define C14_HEADER_H

//conversion class definition
class conversion
{
    //variables feet and centimeters are private to preserve data integrity
    private:
        double feet;
        double centimeters;

    //Member functions of the conversion class access and mutate private variables
    public:
        void setFeet();
        double getFeet() const;
        void setCenti();
        double getCenti() const;

        void print() const;

        //Class constructor
        conversion();

};

#endif // C14_HEADER_H
