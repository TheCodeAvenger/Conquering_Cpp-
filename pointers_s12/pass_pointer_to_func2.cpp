#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *const v)
{
    for (auto str : *v)
    {
        cout << str << " ";
    }
    cout << endl;
    // (*v).at(0) = "Kanha"; //error because it become const pointer to const data
    // v = nullptr;
}

void display(int *array, int sentinel)
{
    while (*array != sentinel)
    {
        cout << *array++ << " ";
    }
    cout << endl;
}

// ------------Main function----------------
int main()
{
    // -------------------example 1-----------------
    int x{100}, y{200};

    cout << "x is : " << x << endl;
    cout << "y is : " << y << endl;

    swap(&x, &y);

    cout << "After calling swap , x is : " << x << endl;
    cout << "After calling swap , y is : " << y << endl;

    // -------------------example 2-----------------

    cout << "<------------example 2------------------>" << endl;

    vector<string> stooges{"Krishna", "Pankaj", "Yuvraj"};
    display(&stooges);

    // -------------------example 3-----------------

    cout << "<------------example 3------------------>" << endl;

    int scores[]{100, 98, 97, 76, 87, -1};

    display(scores, -1);

    cout << endl;
    return 0;
}