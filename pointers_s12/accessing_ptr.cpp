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

    int num{10};
    double num_2{2.5};

    int *new_ptr{nullptr};
    new_ptr = &num;   // ok
    new_ptr = &num_2; // compiler error , due to different data type

    return 0;
}