// math examples

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double num{};

    cout << "Enter a number(Double) : ";
    cin >> num;

    cout << "square root of " << num << " is : " << sqrt(num) << endl;
    cout << "cube root of " << num << " is : " << cbrt(num) << endl;

    cout << "sin of " << num << " is : " << sin(num) << endl;
    cout << "cos of " << num << " is : " << cos(num) << endl;

    cout << "ceil of " << num << " is : " << ceil(num) << endl;
    cout << "floor of " << num << " is : " << floor(num) << endl;
    cout << "round of " << num << " is : " << round(num) << endl;

    double power{};
    cout << "\n Enter a power to raise " << num << " to :";
    cin >> power;

    cout << num << " raised to the " << power << " power is " << pow(num, power) << endl;
}
