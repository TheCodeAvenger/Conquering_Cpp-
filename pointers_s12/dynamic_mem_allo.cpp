#include <iostream>
using namespace std;

int main()
{
    // <---------------Dynamic memory allocation------------->

    // Example 1 :-

    int *int_ptr{nullptr};
    int_ptr = new int;

    cout << int_ptr << endl;
    cout << *int_ptr << endl; // garbage value

    *int_ptr = 100;
    cout << *int_ptr << endl; // garbage value

    delete int_ptr;

    // Example 2 :-

    int *ptr_2{nullptr};
    ptr_2 = new int; // allocate an integer on heap

    delete ptr_2; // frees alloacted storage

    // example 3:-
    // using new[] to alloacte storage for an array

    int *array_ptr{nullptr};
    int size{};
    cout << "How big you want array to be ? ";
    cin >> size;

    array_ptr = new int[size]; // allocate array on heap

    delete[] array_ptr; // free allocate storage

    // example 4:-

    size_t size_of_double{};
    double *temp_ptr{nullptr};

    cout << "How many temps? ";
    cin >> size_of_double;

    temp_ptr = new double[size_of_double];

    cout << temp_ptr << endl;

    delete[] temp_ptr;

    return 0;
}