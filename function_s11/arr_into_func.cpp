#include <iostream>

using namespace std;

void print_array(int numbers[], size_t size);

void zero_array(int numbers[], size_t size);

// main func
int main()
{
    int numbers[]{1, 2, 3, 4, 5};
    int array_size{5};

    print_array(numbers, array_size); // to print array
    zero_array(numbers, array_size);  // to zero entire array

    return 0;
}

void print_array(int numbers[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}

void zero_array(int numbers[], size_t size)
{

    for (size_t i = 0; i < size; i++)
    {
        numbers[i] = 0;
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}
// we're passing actual address of array to function , function can manipulate array

// to avoid this we use "const" keyword with parameters
// lets see them in next example

void print_array(const int numbers[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
        numbers[i] = 0; // any attempt to modify array will result in compiler error
    }
}