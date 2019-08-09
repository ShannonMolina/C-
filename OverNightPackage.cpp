#include <iostream>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage()
{}

OvernightPackage::OvernightPackage(const string &fName, const string &tName, const string &fAddress, const string &tAddress, const string &fCity,
    const string &tCity, const string &fState, const string &tState, int fZip, int tZip, double w, double cpo, double extra)
    //explicitly call base-class constructor
    : Package(fName, tName, fAddress, tAddress, fCity, tCity, fState, tState, fZip, tZip, w, cpo)
{
     setExtraCostPerOunce(extra); //validate and extra cost per ounce
 }//end OvernightPackage constructor

 /************************************************************************************************/

void OvernightPackage::setExtraCostPerOunce(double extra)
{

    while (extra < 0) //must be positive
    {
        cout << "The extra cost per ounce must be positive and greater than zero." << endl;
        cout << "Please try again." << endl;
        cout << "Extra cost per ounce: ";
        cin >> extra;
    }
    extraCost = extra;
 }//end function setExtraCostPerOunce

 /************************************************************************************************/

 double OvernightPackage::calculateCost()
 {
    return Package::calculateCost() + (extraCost +(Package::getWeight()) );

}//end function calculateCost

/************************************************************************************************/
