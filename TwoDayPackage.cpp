#include <iostream>
#include "TwoDayPackage.h"
using namespace std;

/************************************************************************************************/

TwoDayPackage::TwoDayPackage()
{}

TwoDayPackage::TwoDayPackage(const string &fName, const string &tName, const string &fAddress, const string &tAddress, const string &fCity,
    const string &tCity, const string &fState, const string &tState, int fZip, int tZip, double w, double cpo, double add)
    //explicitly call base-class constructor
    : Package(fName, tName, fAddress, tAddress, fCity, tCity, fState, tState, fZip, tZip, w, cpo)
{
     setAddCost(add); //validate and store flat fee

 }//end TwoDayPackage constructor

 /************************************************************************************************/

void TwoDayPackage::setAddCost(double add)
{
    while (add < 0) //must be positive
    {
        cout << "The flat fee must be positive and greater than zero." << endl;
        cout << "Please try again." << endl;
        cout << "Flat fee: ";
        cin >> add;
    }
    addCost = add;
 }//end function setAddCost

 /************************************************************************************************/

 double TwoDayPackage::calculateCost() const
 {

    return addCost + Package::calculateCost();
}//end function calculateCost

/************************************************************************************************/
