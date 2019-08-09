#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <string>
#include "Package.h"
using namespace std;

class OvernightPackage : public Package //derived class:OvernightPackage, base class:Package
{
public:
    OvernightPackage();
    OvernightPackage(const string &, const string &, const string &, const string &, const string &,
    const string &, const string &, const string &, int = 0, int = 0, double = 0.0, double = 0.0, double = 0.50); //overnightpackage constructor

    void setExtraCostPerOunce(double);
    double calculateCost();

private:
    double extraCost;
};//end class OvernightPackage

#endif
