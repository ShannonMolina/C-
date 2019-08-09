#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;

class Package
{
public:
    Package();
    Package(const string &, const string &, const string &, const string &, const string &,
    const string &, const string &, const string &, int = 0, int = 0, double = 0.0, double = 0.0); //package constructor

    //set functions
    void setSender(const string &, const string &, const string &, const string &, int);
    void setRecipient(const string &, const string &, const string &, const string &, int);
    void setWeight(double);
    void setCostPerOunce(double);

    //get functions
    string getFromName() const;
    string getFromAddress() const;
    string getFromCity() const;
    string getFromState() const;
    int getFromZip() const;
    string getToName() const;
    string getToAddress() const;
    string getToCity() const;
    string getToState() const;
    int getToZip() const;
    double getWeight() const;
    double getCostPerOunce() const;

    double calculateCost(); //calculate cost of sending package
    void print();//print sender and recipient info


private:

    string fromName;
    string toName;
    string fromAddress;
    string toAddress;
    string fromCity;
    string toCity;
    string fromState;
    string toState;
    int fromZip;
    int toZip;
    double weight;
    double costPerOunce;

};// end class Package

#endif
