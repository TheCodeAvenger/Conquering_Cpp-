#include <iostream>
using namespace std;

void parameter_test(int formal)
{
    cout << formal << endl; // 50

    formal = 100;
    cout << formal << endl; // 100
}

int main()
{

    int actual{50};
    cout << actual << endl;
    parameter_test(actual); // pass in 50 to parameter_test
    cout << actual << endl; // 50 not changed
}