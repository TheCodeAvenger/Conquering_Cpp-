#include <iostream>
#include <string>
#include "Account.h"

// implementing member method
using namespace std;

int main()
{

    Account krish_account;

    krish_account.set_name("Krish's Account");
    krish_account.set_balance(1000.0);

    if (krish_account.deposit(200.0))
    {
        cout << "Deposit OK" << endl;
    }
    else
    {
        cout << "Deposit Not Allowed" << endl;
    }

    if (krish_account.withdraw(500.0))
    {
        cout << "Withdrawl OK" << endl;
    }
    else
    {

        cout << "Not sufficient funds" << endl;
    }

    if (krish_account.withdraw(1500.0))
    {
        cout << "Withdrawl OK" << endl;
    }
    else
    {

        cout << "Not sufficient funds" << endl;
    }

    return 0;
}
