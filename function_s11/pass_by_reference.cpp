#include <iostream>

using namespace std;
// pass by reference

// ex 1 -> swapping two numbers
void swap(int &a, int &b);

int main()
{
    int x{10};
    int y{20};

    cout << x << " " << y << endl;

    swap(x, y);

    cout << x << " " << y << endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}