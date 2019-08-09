//Savings Account

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount
{
public:
    SavingsAccount(int value);
    double getBalance();
    void calculateMonthlyInterest();
    void modifyInterestRate(double value);

private:
    double savingsBalance;
    double annualInterestRate;
};
#endif
