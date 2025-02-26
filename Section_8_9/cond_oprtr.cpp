#include <iostream>

using namespace std;

int main()
{
    // int num{};

    // cout << "Enter an integer :";
    // cin >> num;

    // if (num % 2 == 0)
    // {
    //     cout << num << " is even " << endl;
    // }
    // else
    // {
    //     cout << num << " is odd " << endl;
    // }
    // cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    // example 2

    int num1{}, num2{};

    cout << "enter 2 integers separated by a space :";
    cin >> num1 >> num2;

    // we have to compare 2 numbers
    if (num1 != num2)
    {
        cout << "Largest :" << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest :" << ((num1 < num2) ? num1 : num2) << endl;
    }
    else
    {
        cout << "Both numbers are same !" << endl;
    }
}