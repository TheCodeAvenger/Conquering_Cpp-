#include <iostream>

using namespace std;

int main()
{
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{}, num2{};

    cout << boolalpha; // will display true/false instead of 0/1 for booleans

    //     cout << "enter 2 integers :" << endl;
    //     cin >> num1 >> num2;

    //     equal_result = (num1 == num2);
    //     not_equal_result = (num1 != num2);

    //     cout << "results (equals)" << equal_result << endl;
    //     cout << "results (not equals)" << not_equal_result << endl;

    // example 2
    double double1{};
    cout << "enter 2 integers :" << endl;
    cin >> num1 >> double1;

    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);

    cout << "results (equals)" << equal_result << endl;
    cout << "results (not equals)" << not_equal_result << endl;
}
