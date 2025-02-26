#include <iostream>
using namespace std;

int main()
{
    // declaring variables and taking values from user
    double num1, num2;
    char op;
    cout << "enter number 1 :";
    cin >> num1;

    cout << "enter operation you want to perform (+ - * / )";
    cin >> op;

    cout << "enter number 2 :";
    cin >> num2;

    // performing operations

    switch (op)
    {
    case '+':
        cout << " Result : " << num1 + num2 << endl;

        break;

    case '-':
        cout << " Result : " << num1 - num2 << endl;

        break;

    case '*':
        cout << " Result : " << num1 * num2 << endl;

        break;

    case '/':
        if (num2 != 0)
        {
            cout << " Result : " << num1 / num2 << endl;
        }
        else
        {
            cout << "number cannot be divided by zero" << endl;
        }
        break;

    default:
        cout << "invalid operatior chosen" << endl;
        break;
    }
}
