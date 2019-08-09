//Project 8: Cylinder.h

#ifndef TESTCYLINDER_H
#define TESTCYLINDER_H

//this is exactly the same as Cylinder.h
//except that default radius is 10, not 3
class testCylinder
{
    public:
        testCylinder( double = 10, double = 0 ); //default radius is 10!

        testCylinder &setRadius( double );
        testCylinder &setHeight( double );

        double getRadius() const;
        double getHeight() const;
        double calculate() const;

    private:
        double radius;
        double height;
};

#endif
