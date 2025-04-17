// subscript and offset notation equivalence

#include <iostream>
using namespace std;

int main()
{
    int scores[]{100, 95, 90};
    cout << "Value of scores " << scores << endl;
    // gives address of first array element as value

    int *score_ptr{scores};
    cout << "Value of score_ptr " << score_ptr << endl;
    // gives address of first array element as value

    cout << "\nArray subscript notation -----------------------" << endl;
    cout << scores[0] << endl; // 100
    cout << scores[1] << endl; // 95
    cout << scores[2] << endl; // 90

    cout << "\nPointer subscript notation -----------------------" << endl;
    cout << score_ptr[0] << endl; // 100
    cout << score_ptr[1] << endl; // 95
    cout << score_ptr[2] << endl; // 90

    cout << "\nPointer offset notation -----------------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << "\nArray offset notation -----------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    return 0;
}