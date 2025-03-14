#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s3};
    string{s1, 0, 3};
    string(10, 'X');

    cout << s0 << endl; // no garbage value
    cout << s0.length() << endl;
}