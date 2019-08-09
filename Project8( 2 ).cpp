//Project 8

#include <iostream>
#include <iomanip>
#include "Cylinder.h"
#include "testCylinder.h"
using namespace std;

Cylinder::Cylinder( double r, double h )
{
   setRadius( r );
   setHeight( h );
}//end Cylinder constructor

//set radius value
Cylinder &Cylinder::setRadius( double r )
{
    radius = r;
    return *this; //enables cascading
}//end function setRadius

//set height value
Cylinder &Cylinder::setHeight( double h )
{
    height = h;
    return *this; //enables cascading
}//end function setHeight

//return radius value
double Cylinder::getRadius() const
{
    return radius;
}//end function getRadius()

//return height value
double Cylinder::getHeight() const
{
    return height;
}//end function getHeight()

//compute and return surface area
double Cylinder::calculate() const
{
    setprecision(2); //two decimal points
    double surfaceArea = (2 * 3.14 * radius * radius) + (2 * 3.14 * radius * height);
    return surfaceArea;
}//end function calculate()

//exact same as Cylinder.cpp
testCylinder::testCylinder( double r, double h )
{
   setRadius( r );
   setHeight( h );
}

testCylinder &testCylinder::setRadius( double r )
{
    radius = r;
    return *this;
}


testCylinder &testCylinder::setHeight( double h )
{
    height = h;
    return *this;
}

double testCylinder::getRadius() const
{
    return radius;
}

double testCylinder::getHeight() const
{
    return height;
}

double testCylinder::calculate() const
{
    setprecision(2);
    double surfaceArea = (2 * 3.14 * radius * radius) + (2 * 3.14 * radius * height);
    return surfaceArea;
}



int main()
{
    Cylinder a; //create new object "a"
    Cylinder b; //create new object "b"
    testCylinder c; //create new object "c"
    double r;
    double h;

    //get info from user
    cout << "Please enter the radius: ";
    cin >> r;
    cout << "Please enter the height: ";
    cin >> h;

    //a has default radius of 3 so we only have to set height
    a.setHeight( h );

    //set radius and height for cylinder b
    //cascaded function calls
    b.setRadius( r ).setHeight( h );

    //c has a default radius of 10 so we only have to set height
    c.setHeight( h );


    cout << "The cylinder with a radius of " << a.getRadius() << " and height of " << a.getHeight() << " has a surface area of: " << a.calculate() << endl;
    cout << "The cylinder with a radius of " << b.getRadius() << " and height of " << b.getHeight() << " has a surface area of: " << b.calculate() << endl;
    cout << "The cylinder with a radius of " << c.getRadius() << " and height of " << c.getHeight() << " has a surface area of: " << c.calculate() << endl;

}
