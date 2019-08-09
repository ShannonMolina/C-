//We want to determine if someone is “rich.”
//The definition of being rich depends upon a number of factors such as age,
//number of dependents, amount of debt, etc., as well as other subjective factors.

#include <iostream>
using namespace std;

//function prototypes
void calcWealth(int *age, long *cash, int *dep, long *owed);
bool isRich(int age, long cash, int dep, long owed);

int main()
{
    int age;
    int dep;
    long cash;
    long owed;

    cout << "Welcome! Let's find out if you are rich!\n" << endl;

    calcWealth(&age, &cash, &dep, &owed);

    if(isRich(age, cash, dep, owed))
        cout << "Congratulations! We consider you as being \"rich.\"\n";
    else
        cout << "I am sorry! You are not yet \"rich.\"\n";


    return 0;

}//end main

void calcWealth(int *age, long *cash, int *dep, long *owed)
{
    cout << "Please enter your age: ";
    cin >> *age;

    cout << "Please enter the amount of cash on hand: ";
    cin >> *cash;

    cout << "Please enter the amount of dependents you have: ";
    cin >> *dep;

    cout << "Please enter the amount of money you owe: ";
    cin >> *owed;

}//end calcWealth

bool isRich(int age, long cash, int dep, long owed)
{
    long tcv = cash - owed; //true cash value

    if(age < 40)
        tcv -= dep * 150000;
    else if (age >= 40 && age <= 50)
        tcv -= dep * 75000;
    else if (age > 50)
        tcv -= dep * 25000;

    if(tcv < 1000000)
        return false;
    else
        return true;

}//end isRich
