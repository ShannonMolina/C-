//This program uses overloaded operators to simplify, add, subtract,
//multiply, divide, and compare fractions.

#include <iostream>
#include "RationalNumber.h"
using namespace std;

/************************************************************************************************/

RationalNumber::RationalNumber() //so we can create new rational number without arguments
{}

/************************************************************************************************/

RationalNumber::RationalNumber( int top, int bottom ) //rational number contains numerator
                                                      //and denominator
{
    numerator = top;
    denominator = bottom;
}

/************************************************************************************************/

void RationalNumber::getData() //function to get data from user
{
    cout << "\nEnter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;

    while(denominator <= 0)//prevents denominator from being negative or 0
    {
        cout << "The Denominator must be a positive value greater than 0." << endl;
        cout << "Please try again" << endl;
        cout << "Enter the denominator: ";
        cin>>denominator;
            }

    reduce();
    cout << "The reduced fraction is: " << numerator << "/"<< denominator << endl;
}

/************************************************************************************************/

RationalNumber RationalNumber::operator+(RationalNumber x)//overload + operator
{
    RationalNumber y; //sum

    //finding the sum's numerator
    y.numerator = (numerator * x.denominator) + (x.numerator * denominator);

    //finding the sum's denominator
    y.denominator = (denominator * x.denominator);

    //simplify
    y.reduce();

    return( y );
}

/************************************************************************************************/

RationalNumber RationalNumber::operator-(RationalNumber x)//overload - operator
{
    RationalNumber y; //difference

    //finding the difference's numerator
    y.numerator = (numerator * x.denominator) - (x.numerator * denominator);

    //finding the difference's denominator
    y.denominator = (denominator * x.denominator);

    y.reduce();

    return( y );
}

/************************************************************************************************/

RationalNumber RationalNumber::operator*(RationalNumber x) //overload * operator
{
    RationalNumber y; //product

    //finding the product's numerator
    y.numerator = (numerator * x.numerator);

    //finding the product's denominator
    y.denominator = (denominator * x.denominator);

    //simplify
    y.reduce();

    return( y );
}

/************************************************************************************************/

RationalNumber RationalNumber::operator/(RationalNumber x) //overload / operator
{
    RationalNumber y; //quotient

    //finding the quotient's numerator
    y.numerator = (numerator * x.denominator);

    //finding the quotient's denominator
    y.denominator = (x.numerator * denominator);

    //simplify
    y.reduce();

    return( y );
}

/************************************************************************************************/

ostream &operator<<(ostream &output, const RationalNumber &number) //overload stream insertion operator
{
    if (number.numerator == number.denominator) //if numerator and denominator are the same
    {                                           //then simplify to one
        output << "1";
    }
    else
    {
        output << number.numerator << "/" << number.denominator;
    }
    return output;
}

/************************************************************************************************/

void RationalNumber::reduce() //find greatest common divisor and simplify
{
    int greatest;
    int gcd = 0;
    greatest= numerator > denominator ? numerator : denominator;
    for (int i = 2; i <= greatest; i++)
        if (numerator % i == 0 && denominator % i == 0)
            gcd = i;
    if (gcd != 0)
    {
        numerator /= gcd;
        denominator /= gcd;
    }
}

/************************************************************************************************/

bool RationalNumber::operator<(const RationalNumber &y) const //overload <
{
    double yValue = ((double) y.numerator / y.denominator ); //find decimal value of fraction y
    double xValue = ((double) numerator / denominator );//find decimal value of fraction x

    if (xValue < yValue)
        return true;

    return false;
}

/************************************************************************************************/

bool RationalNumber::operator>(const RationalNumber &y) const//overload >
{
    double yValue = ((double) y.numerator / y.denominator );//find decimal value of fraction y
    double xValue = ((double) numerator / denominator );//find decimal value of fraction x

    if (xValue > yValue)
        return true;

    return false;
}

/************************************************************************************************/

bool RationalNumber::operator>=(const RationalNumber &y) const //overload >=
{
    double yValue = ((double) y.numerator / y.denominator );//find decimal value of fraction y
    double xValue = ((double) numerator / denominator );//find decimal value of fraction x

    if (xValue >= yValue)
        return true;

    return false;
}

/************************************************************************************************/

bool RationalNumber::operator<=(const RationalNumber &y) const //overload <=
{
   double yValue = ((double) y.numerator / y.denominator );//find decimal value of fraction y
   double xValue = ((double) numerator / denominator );//find decimal value of fraction x

  if (xValue <= yValue)
      return true;

    return false;
}

/************************************************************************************************/

bool RationalNumber::operator==(const RationalNumber &y) const //overload ==
{
    double yValue = ((double) y.numerator / y.denominator );//find decimal value of fraction y
    double xValue = ((double) numerator / denominator );//find decimal value of fraction x

    if ((xValue == yValue))
        return true;

    return false;
}

/************************************************************************************************/

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
