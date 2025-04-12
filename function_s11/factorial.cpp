#include <iostream>
using namespace std;

// factorial example
unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
    {
        return 1; // base case
    }
    return n * factorial(n - 1); // recursion
}

int main()
{
    cout << factorial(3) << endl;
    cout << factorial(8) << endl;
    cout << factorial(12) << endl;
    cout << factorial(20) << endl;
    return 0;
}