// <---------------------Section 12 challenge---------------------->

#include <iostream>
using namespace std;

void print(const int *const arr, size_t size)
{
    cout << "[ ";
    for (size_t i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << " ]";
    cout << endl;
}

// this function is dynamically allocates a new array that is of size = size1*size2
// then it loops through each elemnt of array 2 and multiplies it across all the elements of array 1
// and each product is stored in the newly created array

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{

    int *new_array{nullptr};
    new_array = new int[size1 * size2];

    int position{0};

    for (size_t i = 0; i < size2; ++i)
    {
        for (size_t j = 0; j < size1; ++j)
        {
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }
    return new_array;
}

int main()
{
    const size_t array_1_size{5};
    const size_t array_2_size{3};

    int array_1[]{1, 2, 3, 4, 5};
    int array_2[]{10, 20, 30};

    cout << "Array 1 :";
    print(array_1, array_1_size);

    cout << "Array 2 :";
    print(array_2, array_2_size);

    int *result = apply_all(array_1, array_1_size, array_2, array_2_size);
    constexpr size_t result_size{array_1_size * array_2_size};

    cout << "Result ";
    print(result, result_size);

    delete[] result;
    cout << endl;

    return 0;
}