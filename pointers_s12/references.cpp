#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num{100};
    int &ref{num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;

    cout << "\n----------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    num = 300;

    cout << "\n----------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    vector<string> stooges{"Krishna", "kanha", "Batman"};

    for (auto str : stooges)
    {
        str = "unavailable"; // str is just a copy of each vector element
    }

    for (auto str : stooges)
    {
        cout << str << endl; // no changes
    }

    cout << "\n----------------------" << endl;

    for (auto &str : stooges)
    {
        str = "unavailable"; // str is a refeernce to each vector element
    }
    for (auto const &str : stooges) // notice we are using const
    {
        cout << str << endl; // notice the vector elements have changed
    }
    cout << endl;
    return 0;
}