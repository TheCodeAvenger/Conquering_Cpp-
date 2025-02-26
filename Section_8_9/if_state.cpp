#include <iostream>
using namespace std;

int main()
{
    int num{};
    const int min{10};
    const int max{100};

    cout << "enter a number between " << min << " and " << max << ":";
    cin >> num;

    if (num >= min)
    {
        cout << "\n=========== if statement ===========" << endl;
        cout << num << " is greater than " << min << endl;

        int diff = num - min;
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max)
    {
        cout << "\n=========== if statement 2===========" << endl;
        cout << num << " is smaller than or equal to  " << max << endl;

        int diff = max - num;

        cout << max << " is " << diff << " greater than " << num << endl;
    }

    if (num >= min && num <= max)
    {
        cout << "\n=========== if statement 3===========" << endl;
        cout << num << " lies between " << max << " and " << min << endl;
    }

    if (num == min || num == max)
    {
        cout << "\n=========== if statement 4===========" << endl;
        cout << num << " is right on a boundary " << endl;
        cout << "This means all 4 test cases display" << endl;
    }

    return 0;
}