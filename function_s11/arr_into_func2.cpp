#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size); // using "const" in both prototype func and defination of func ,will not let function make changes in array
void set_array(int arr[], size_t size, int value);

int main()
{
    int numbers[]{100, 90, 80, 70, 60};
    int array_size{5};
    int set_value{100};

    print_array(numbers, array_size);
    set_array(numbers, array_size, set_value);
    print_array(numbers, array_size);
}

// defining functions

void print_array(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void set_array(int arr[], size_t size, int value)
{

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = value;
    }
}