#include <iostream>
using namespace std;

int main()
{
    // --------Pointer to constant data-------------
    // example 1:-

    int high_score{100};
    int low_score{50};
    const int *score_ptr{&high_score};
    // *score_ptr = 80;        // error
    score_ptr = &low_score; // passed

    // example 2:-
    int a{10};
    int b{20};
    const int *ptr{&a};

    // *ptr = 30; // error
    ptr = &b; // passed

    // --------Const Pointer to data-------------
    // example 1:-

    int high_score2{100};
    int low_score2{50};

    int *const score_ptr2{&high_score2};

    *score_ptr2 = 90; // passed
    // score_ptr2 = &low_score2; // error

    //  example 2

    int c{10};
    int d{20};

    int *const ptr2{&c};

    *ptr2 = 30; // passed
    // ptr2 = &d;  // error

    // --------Const Pointer to const data-------------
    // example 1:-
    const int high_score3{100};
    const int low_score3{50};

    const int *const ptr3{&high_score3};

    // *ptr3 = 90;         // error
    // ptr3 = &low_score3; // error

    // example 2:-
    const int e{10};
    const int f{20};

    const int *const ptr4{&e};

    // *ptr4 = 30; // error
    // ptr4 = &f;  // error

    return 0;
}