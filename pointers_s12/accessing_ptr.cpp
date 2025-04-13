#include <iostream>
using namespace std;

int main()
{

    // "&" address operator

    int *p;

    cout << "The value of P is : " << p << endl; // garbage
    cout << "The address of P is : " << &p << endl;
    cout << "The size of P is : " << sizeof p << endl;

    p = nullptr;

    cout << "value of p is : " << p << endl;

    return 0;
}