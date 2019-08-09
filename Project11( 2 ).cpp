//This program utilizes inheritance to represent a package delivery system.
//The base class is package. The derived classes are TwoDayPackage and OvernightPackage.

#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"
#include <string>
#include <iomanip>
using namespace std;

/************************************************************************************************/

Package::Package()
{}

//constructor
Package::Package(const string &fName, const string &tName, const string &fAddress, const string &tAddress, const string &fCity,
    const string &tCity, const string &fState, const string &tState, int fZip, int tZip, double w, double cpo)
{
     fromName = fName; //should validate
     toName = tName; //should validate
     fromAddress = fAddress; //should validate
     toAddress = tAddress; //should validate
     fromCity = fCity; //should validate
     toCity = tCity; //should validate
     fromState = fState; //should validate
     toState = tState; //should validate
     fromZip = fZip; //should validate
     toZip = tZip; //should validate
     weight = w; //should validate
     costPerOunce = cpo; //should validate

    setSender(fName, fAddress, fCity, fState, fZip); //validate and store sender items
    setRecipient(tName, tAddress, tCity, fState, fZip); // validate and store recipient items
    setWeight(w); //validate and store weight
    setCostPerOunce(cpo); //validate and store cost per ounce
}// end Package constructor

/************************************************************************************************/

void Package::setSender(const string &fName, const string &fAddress, const string &fCity, const string &fState, int fZip)
{
    fromName = fName;
    fromAddress = fAddress;
    fromCity = fCity;
    fromState = fState;
    fromZip = fZip;
} //end function setSender

/************************************************************************************************/

void Package::setRecipient(const string &tName, const string &tAddress, const string &tCity, const string &tState, int tZip)
{
    toName = tName;
    toAddress = tAddress;
    toCity = tCity;
    toState = tState;
    toZip = tZip;
}//end function setRecipient

/************************************************************************************************/


void Package::setWeight(double w)
{
    while (w <= 0) //must be positive
    {
        cout << "The weight must be positive and greater than zero." << endl;
        cout << "Please try again." << endl;
        cout << "Weight of package: ";
        cin >> w;
    }
    weight = w;
}//end function setWeight

/************************************************************************************************/

void Package::setCostPerOunce(double cpo)
{

    while (cpo <= 0) { //must be positive
        cout << "The cost per ounce must be positive and greater than zero." << endl;
        cout << "Please try again" << endl;
        cout << "Cost per ounce: ";
        cin >> cpo;
    }
    costPerOunce = cpo;
}

/************************************************************************************************/


string Package::getFromName() const
{
    return fromName;
}//end function getFromName

/************************************************************************************************/

string Package::getFromAddress() const
{
    return fromAddress;
}//end function getFromAddress

/************************************************************************************************/

string Package::getFromCity() const
{
    return fromCity;
} //end function getFromCity

/************************************************************************************************/

string Package::getFromState() const
{
    return fromState;
}//end function getFromState

/************************************************************************************************/

int Package::getFromZip() const
{
    return fromZip;
}//end function getFromZip

/************************************************************************************************/

string Package::getToName() const
{
    return toName;
}//end function getToName

/************************************************************************************************/

string Package::getToAddress() const
{
    return toAddress;
}//end function getToAddress

/************************************************************************************************/

string Package::getToCity() const
{
    return toCity;
} //end function getToCity

/************************************************************************************************/

string Package::getToState() const
{
    return toState;
}//end function getToState

/************************************************************************************************/

int Package::getToZip() const
{
    return toZip;
}//end function getToZip

/************************************************************************************************/

double Package::getWeight() const
{
    return weight;
}//end function getWeight

/************************************************************************************************/

double Package::calculateCost()
{

    return (weight * costPerOunce);
}

/************************************************************************************************/

void Package::print()
{
    cout << "Sender:" << endl;
    cout << getFromName() << endl;
    cout << getFromAddress() << endl;
    cout << getFromCity() << endl;
    cout << getFromState() << endl;
    cout << getFromZip() << endl;

    cout << "" << endl; //blank

    cout << "Recipient:" << endl;
    cout << getToName() << endl;
    cout << getToAddress() << endl;
    cout << getToCity() << endl;
    cout << getToState() << endl;
    cout << getToZip() << endl;

    cout << "" << endl; //blank

}// end function print()

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

 double TwoDayPackage::calculateCost()
 {

    return addCost + Package::calculateCost();
}//end function calculateCost

/************************************************************************************************/


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


int main()
{
    int n; //for switch
    char quit; //to end while loop

    //create objects
    Package base;
    TwoDayPackage twoDay;
    OvernightPackage overnight;

    //sender
    string fromName, fromAddress, fromCity, fromState;
    int fromZip;

    //recipient
    string toName, toAddress, toCity, toState;
    int toZip;

    //doubles used to calculate cost
    double w, cpo, add, extra;

        cout << "***********************************************************************************" << endl;
        cout << "Shannon Molina" << endl;
        cout << "CS225" << endl;
        cout << "Programming Assignment 11\n" << endl;
        cout << "Welcome!" << endl;
        cout << "This program uses inheritance to model package delivery services.\n" <<endl;
        cout << "Enjoy!\n" << endl;
        cout << "***********************************************************************************\n" << endl;


    while (quit != 'q')
    {

    //takes input for info of sender

        cout << "Sender Information" << endl;

        //using getline so cin acknowledges spaces as part of the string

        cout << "Name: ";
        getline(cin, fromName);

        cout << "Address: ";
        getline(cin, fromAddress);

        cout << "City: ";
        getline(cin, fromCity);

        cout << "State: ";
        getline(cin, fromState);

        cout << "Zip: ";
        cin >> fromZip;

        cin.ignore(); //so it doesn't skip input for toName


        //setSender functions
        base.setSender(fromName, fromAddress, fromCity, fromState, fromZip);
        twoDay.setSender(fromName, fromAddress, fromCity, fromState, fromZip);
        overnight.setSender(fromName, fromAddress, fromCity, fromState, fromZip);

        //takes input for info of recipient
        cout << "\nRecipient Information" << endl;

        cout << "Name: ";
        getline(cin, toName);

        cout << "Address: ";
        getline(cin, toAddress);

        cout << "City: ";
        getline(cin, toCity);

        cout << "State: ";
        getline(cin, toState);

        cout << "Zip: ";
        cin >> toZip;

        //setRecipient functions
        base.setRecipient(toName, toAddress, toCity, toState, toZip);
        twoDay.setRecipient(toName, toAddress, toCity, toState, toZip);
        overnight.setRecipient(toName, toAddress, toCity, toState, toZip);

        //set weight
        cout << "\nWeight of package(in ounces): ";
        cin >> w;
        base.setWeight(w);
        twoDay.setWeight(w);
        overnight.setWeight(w);


        //set cost per ounce
        cout << "Cost per ounce: ";
        cin >> cpo;
        base.setCostPerOunce(cpo);
        twoDay.setCostPerOunce(cpo);
        overnight.setCostPerOunce(cpo);


    cout << "\nFor standard shipping, please enter 1." << endl;
    cout << "For two-day shipping, please enter 2." << endl;
    cout << "For overnight shipping, please enter 3.\n" << endl;
    cin >> n;
    cout << endl;

    switch (n)
    {
    case 1:
        base.print();

        cout << "Total Cost: $" << setprecision(2) << base.calculateCost() <<endl;
        break;

    case 2:
        cout << "Flat fee: ";
        cin >> add;
        twoDay.setAddCost(add);

        twoDay.print();

        cout << "Total Cost: $" << setprecision(2) << twoDay.calculateCost() <<endl;
        break;

    case 3:
        cout << "Extra cost per ounce: ";
        cin >> extra;
        overnight.setExtraCostPerOunce(extra);

        overnight.print();

        cout << "Total Cost: $" << setprecision(2) << overnight.calculateCost() <<endl;
        break;

    default:

        cout << "You did not enter 1, 2, or 3." <<endl;

    } // end switch

    cout << "Enter any key to continue, or q to quit" << endl;
    cin >> quit;
    cin.ignore(); //so it doesnt skip input for name on repeat

} //end while

} // end main
