#include <iostream>
using namespace std;

int main()
{

    // ------------------example 1 ------------------
    cout << "\n-------------------1------------" << endl;

    int score[]{100, 90, 80, 70, -1};

    int *score_ptr{score};

    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    // --------------------example 2-------------------

    cout << "\n-------------------2------------" << endl;

    score_ptr = score;

    while (*score_ptr != -1)
    {
        cout << *score_ptr++ << endl;
    }

    // --------------------example 3-------------------

    cout << "\n------------------3-------------" << endl;

    string s1{"Krishna"};
    string s2{"Krishna"};
    string s3{"Kanha"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << boolalpha; // gives value in true or false

    cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl; // false
    cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl; // true

    cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl; // true
    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl; // true

    p3 = &s3;

    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl; // false

    // --------------------example 4-------------------

    cout << "\n-----------------4--------------" << endl;

    char name[]{"Krishna"};
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0]; // K
    char_ptr2 = &name[4]; // h

    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

    cout << endl;

    return 0;
}