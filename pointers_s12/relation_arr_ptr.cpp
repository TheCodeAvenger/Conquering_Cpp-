// lets see relation between arrays and pointers

#include <iostream>
using namespace std;

int main()
{
    int score[]{10, 20, 30};

    cout << score << endl;
    cout << *score << endl; // dereferencing

    int *score_ptr{score};

    cout << score_ptr << endl;
    cout << *score_ptr << endl;

    // if the pointer points to the same data type as array element ,
    //  then the pointer and array name can be used interchangabely

    // <-----------------example2---------------->

    cout << "----------------example 2----------------" << endl;

    cout << score_ptr << endl; // 0x61ff00 - address of first element

    cout << (score_ptr + 1) << endl; // 0x61ff04 - address of next element

    cout << (score_ptr + 2) << endl; // 0x61ff08 - address of next element

    cout << "----------------example 3----------------" << endl;

    cout << *score_ptr << endl; // 10 - value of first element

    cout << *(score_ptr + 1) << endl; // 20 - value of next element

    cout << *(score_ptr + 2) << endl; // 30 - value of next element

    return 0;
}