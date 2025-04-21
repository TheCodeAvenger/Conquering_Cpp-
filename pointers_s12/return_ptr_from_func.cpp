#include <iostream>
using namespace std;

// Returning a pointer from function

int *largest_num(int *ptr1, int *ptr2)
{
    if (*ptr1 > *ptr2)
    {
        return ptr1;
    }
    else
    {
        return ptr2;
    }
}

// returning dynamically allocated memory
int *create_array(size_t size, int init_value = 0)
{
    int *new_storage{nullptr};

    new_storage = new int[size];

    for (size_t i = 0; i < size; ++i)
    {
        *(new_storage + i) = init_value;
    }
    return new_storage;
}

void display(const int *const array, size_t size)
{

    for (size_t i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    // example 1-----------------
    int a{100};
    int b{200};

    int *largest_ptr{nullptr};

    largest_ptr = largest_num(&a, &b);

    cout << *largest_ptr << endl; // 200

    // ---------------example 2-----------------
    int *my_array{nullptr};
    int size_of_array{};
    int init_value{};

    cout << "What should be the size of array ? ";
    cin >> size_of_array;

    cout << "What you want to initialize array with ? ";
    cin >> init_value;

    my_array = create_array(size_of_array, init_value);

    // cout << *my_array << endl;

    cout << "--------------display array----------" << endl;

    display(my_array, size_of_array);

    delete[] my_array; // free the storage
    return 0;
}