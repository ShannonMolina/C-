//This program utilizes inheritance to represent a package delivery system.
//The base class is package. The derived classes are TwoDayPackage and OvernightPackage.

#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"
#include <string>
#include <iomanip>
using namespace std;


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
