//Project 8: Cylinder.h

///prevent multiple inclusions of header file
#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
    public:
        Cylinder( double = 3, double = 0 ); //default constructor

        //set functions
        //Cylinder & return types enable cascading
        Cylinder &setRadius( double ); //set radius
        Cylinder &setHeight( double ); //set height

        //get functions
        double getRadius() const; //get radius
        double getHeight() const; //get height
        double calculate() const; //calculate surface area

    private:
        double radius;
        double height;
};//end class Cylinder

#endif
