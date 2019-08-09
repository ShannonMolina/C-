//This program uses overloaded operators to simplify, add, subtract,
//multiply, divide, and compare fractions.

#include <iostream>
#include "RationalNumber.h"
using namespace std;


int main()
{
    //create rational numbers
    RationalNumber a;
    RationalNumber b;

    RationalNumber sum;
    RationalNumber difference;
    RationalNumber product;
    RationalNumber quotient;

    char quit;

    cout << "***********************************************************************************" << endl;
    cout << "Shannon Molina" << endl;
    cout << "CS225" << endl;
    cout << "Programming Assignment 10\n" << endl;
    cout << "Welcome!" << endl;
    cout << "This program simplifies, adds, subtracts, multiplies, and compares fractions.\n" <<endl;
    cout << "Enjoy!\n" << endl;
    cout << "***********************************************************************************\n" << endl;

    while (quit != 'q')
    {

    a.getData(); //gives user prompt and gets input
                 //for numerator and denominator of a

    cout << "\nNow for the next fraction!\n" << endl;

    b.getData(); //gives user prompt and gets input
                 //for numerator and denominator of b

   //using overloaded add, subtract, multiply and divide
   sum = a + b;
   difference = a - b;
   product = a * b;
   quotient = a / b;

   cout << "\nThe sum is " << sum << endl;

   cout << "\nThe difference is " << difference << endl;

   cout << "\nThe product is " << product << endl;

   cout << "\nThe quotient is " << quotient << endl;

   cout << "" << endl; //blank line

   //using relational and equality operators
  if ( a < b )
        cout << a << " < " << b << endl;

   if ( a > b )
        cout << a << " > " << b << endl;

   if ( a >= b )
        cout << a << " >= " << b << endl;

   if ( a <= b )
        cout << a << " <= " << b << endl;

   if ( a == b )
        cout << a << " = " << b << endl;

   cout << "Enter any key to continue, or q to quit" << endl;
   cin >> quit;

}//end while

}//end main
