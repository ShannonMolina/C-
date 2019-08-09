// Project 9: Exercise 10.7
// Savings Account


#include <iostream>
#include<iomanip>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(int balance)
{
    savingsBalance = balance;
}

//calculate monthly interest
void SavingsAccount::calculateMonthlyInterest()
{
    savingsBalance += (savingsBalance * annualInterestRate / 12);
}

double SavingsAccount::getBalance()
{
    return savingsBalance;
}
//static data member to store annualInterestRate
//intialized at 0
double annualInterestRate = 0;

//static member function modifyIntererestRate
//sets annualInterestRate to a new value
void SavingsAccount::modifyInterestRate(double value)
{
    annualInterestRate = value;
}
int main()
{
    SavingsAccount saver1(2000.00); //create new object saver1
    SavingsAccount saver2(3000.00); //create new object saver2

    //set annualInterestRate to 3%
    saver1.modifyInterestRate(0.03);
    saver2.modifyInterestRate(0.03);

    saver1.calculateMonthlyInterest();
    cout << "With an annual interest rate of 3%:" << endl;
    cout << "Saver 1's new savings balance would be : $" << saver1.getBalance() << endl;

    saver2.calculateMonthlyInterest();
    cout << "Saver 2's new savings balance would be : $" << saver2.getBalance() << endl;
    cout << endl;

   //set annualInterestRate to 3%
    saver1.modifyInterestRate(0.04);
    saver2.modifyInterestRate(0.04);

    saver1.calculateMonthlyInterest();
    cout << "With an annual interest rate of 4%:" << endl;
    cout << "Saver 1's new savings balance would be: $" << saver1.getBalance() << endl;

    saver2.calculateMonthlyInterest();
    cout << "Saver 2's new savings balance would be: $" << saver2.getBalance() << endl;
    cout << endl;//blankline

}
