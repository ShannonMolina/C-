#include "savingsAccount.h"


// copy constructor to initialize the value at instantiation
SavingsAccount::SavingsAccount(int value)
{
    savingsBalance = value;
}

//data member annualInterestRate used to store the annual interest rate
double annualInterestRate = 0;

//member function calculateMonthlyInterest calculates the monthly interest
void SavingsAccount::calculateMonthlyInterest()
{
    savingsBalance += ((savingsBalance * annualInterestRate) / 12);
}

//static member function modifyIntererestRate
//sets the static annualInterestRate to a new value
void SavingsAccount::modifyIntererestRate(double value)
{
    annualInterestRate = value;
}
