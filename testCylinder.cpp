#include <iostream>
#include <iomanip>
#include "testCylinder.h"
using namespace std;


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

