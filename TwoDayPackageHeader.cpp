#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <string>
#include "Package.h"
using namespace std;

class TwoDayPackage : public Package //derived class:TwoDayPackage, base class:Package
{
public:
    TwoDayPackage();
    TwoDayPackage(const string &, const string &, const string &, const string &, const string &,
    const string &, const string &, const string &, int = 0, int = 0, double = 0.0, double = 0.0, double = 0.0); //twodaypackage constructor

    void setAddCost(double); //add flat fee
    double calculateCost() const;

private:
    double addCost;
};//end class TwoDayPackage

#endif
