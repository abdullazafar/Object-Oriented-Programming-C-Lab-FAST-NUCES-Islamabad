#include <iostream>
using namespace std;

struct Account
{
    int accountNo;
    double balance; 
};


void deposit(Account& acc, double amount)
{
    acc.balance += amount;
}

bool withdraw(Account* acc, double amount)
{
    if(acc->balance >= amount)
    {
        acc->balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

void printStatement(const Account& acc)
{
    cout<<"Account No : "<<acc.accountNo<<endl;

    cout<<"Balance    :  "<<acc.balance<<endl;
}

