//Header file for RationalNumber


#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include <iostream>
using namespace std;

class RationalNumber
{

friend ostream& operator<<(ostream &, const RationalNumber &);

    public:
        RationalNumber();
        RationalNumber( int, int );
        void getData();
        void banner();

        //overload addition, subtraction, multiplication, and division operators
        RationalNumber operator+(RationalNumber);
        RationalNumber operator-(RationalNumber);
        RationalNumber operator*(RationalNumber);
        RationalNumber operator/(RationalNumber);

        //overload relational and equality operators
        bool operator<=(const RationalNumber &) const; //less than or equal to operator
        bool operator<(const RationalNumber &) const; //less than operator
        bool operator>=(const RationalNumber &) const; //greater than or equal to operator
        bool operator>(const RationalNumber &) const; // greater than operator
        bool operator==(const RationalNumber &) const; //equality operator





      private:
        int numerator;
        int denominator;
        void reduce();


};//end class RationalNumber

#endif
