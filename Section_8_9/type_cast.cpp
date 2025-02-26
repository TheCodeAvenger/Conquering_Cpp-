#include <iostream>

using namespace std;

int main()
{
    int total{};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "enter three integers :" << endl;
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

        // average of 3 numbers;

    double average{0.0};

    average = static_cast<double>(total) / count;

    cout << "3 number were :" << num1 << num2 << num3 << endl;
    cout << "sum of numbers :" << total << endl;
    cout << "average of numbers :" << average << endl;

    return 0;
}