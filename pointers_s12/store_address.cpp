#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // --------------example 1-----------------

    int num{10};

    cout << "Value of num is : " << num << endl;
    cout << "sizeof of num is : " << sizeof num << endl;
    cout << "Addresss of num is : " << &num << endl;

    cout << endl;
    // --------------example 2-----------------

    int *p;

    cout << "Value of p is : " << p << endl; // garbage memory address
    cout << "sizeof of p is : " << sizeof p << endl;
    cout << "Addresss of p is : " << &p << endl; // addreess where pointer is stored

    cout << endl;
    // --------------example 3-----------------
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "/nsizeof p1 is : " << sizeof p1 << endl;
    cout << "sizeof p2 is : " << sizeof p2 << endl;
    cout << "sizeof p3 is : " << sizeof p3 << endl;
    cout << "sizeof p4 is : " << sizeof p4 << endl;
    cout << "sizeof p5 is : " << sizeof p5 << endl;

    cout << endl;
    // --------------example 4-----------------

    int score{10};
    double high_temp{12.5};

    int *score_ptr{nullptr};
    score_ptr = &score;

    cout << "value of score :" << score << endl;
    cout << "Address of score :" << &score << endl;
    cout << "value of score_ptr :" << score_ptr << endl;
    cout << "Address of score_ptr :" << &score_ptr << endl;

    score_ptr = &high_temp; // gives compiler error

    cout << endl;
    return 0;
}