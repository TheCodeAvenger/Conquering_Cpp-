#include <iostream>

using namespace std;

int main()
{

    cout << boolalpha;
    int num1{}, num2{};

    // cout << "enter two integers :";

    // cin >> num1 >> num2;

    // cout << num1 << ">" << num2 << ":" << (num1 > num2) << endl;
    // cout << num1 << ">=" << num2 << ":" << (num1 >= num2) << endl;
    // cout << num1 << "<" << num2 << ":" << (num1 < num2) << endl;
    // cout << num1 << "<=" << num2 << ":" << (num1 <= num2) << endl;

    const int lower{10};
    const int higher{20};

    cout << "enter an integer which is greater than " << lower << ":";
    cin >> num1;
    cout << num1 << ">" << lower << "is :" << (num1 > lower) << endl;

    cout << "enter an integer which is less than " << higher << ":";
    cin >> num1;
    cout << num1 << "<" << higher << "is :" << (num1 < higher) << endl;
}