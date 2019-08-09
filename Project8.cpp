//Project 8

#include <iostream>
#include <iomanip>
#include "Cylinder.h"
#include "testCylinder.h"
using namespace std;


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
