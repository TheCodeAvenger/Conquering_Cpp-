#include <iostream>
using namespace std;
// -----------------Reversing a array using pointers-----------------

void reverse_array(int *array, int size)
{

    int *start = array;
    int *end = array + (size - 1);

    if (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    int my_array[]{20, 40, 60, 80, 100};
    int size_of_array = sizeof(my_array) / sizeof(my_array[0]);

    cout << "Array :";
    for (auto ele : my_array)
    {
        cout << ele << " ";
    }
    cout << endl;

    reverse_array(my_array, size_of_array);

    cout << "Reversed Array :";
    for (auto ele : my_array)
    {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}
