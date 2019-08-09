#include <iostream>
#include "Package.h"
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

double Package::calculateCost() const
{

    return (weight * costPerOunce);
}//end function calculateCost

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

}// end function print

/************************************************************************************************/
