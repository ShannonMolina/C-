//Project 8: Cylinder.cpp

#include <iostream>
#include <iomanip>
#include "Cylinder.h"
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

