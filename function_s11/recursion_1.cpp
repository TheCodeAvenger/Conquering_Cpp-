#include <iostream>
using namespace std;

// factorial example
int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

// fibonacci example

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1) // base case
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // recursion
}

int main()
{
    // ex 1
    int n{};
    cout << "Enter the number to find its factorial : ";
    cin >> n;

    int fact = factorial(n);
    cout << fact << endl;

    // ex 2
    cout << fibonacci(30) << endl;
    return 0;
}