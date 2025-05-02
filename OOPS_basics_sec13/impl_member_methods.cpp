#include <iostream>
using namespace std;
// implementing Mebmber Methods

// ----------------inside the class declaration----------------
class Account
{

private:
    double balance;

public:
    void set_balance(double bal)
    {
        balance = bal;
    }

    double get_balance()
    {
        return balance;
    }
};

// -----------Outside the class declaration-------------
class Account_2
{

private:
    double balance_2;

public:
    void set_balance_2(double bal2);

    double get_balance_2();
};

void Account_2 ::set_balance_2(double bal2)
{
    balance_2 = bal2;
}

double Account_2 ::get_balance_2()
{
    return balance_2;
}

int main()
{

    return 0;
}