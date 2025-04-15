#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // ----------Example 1-------------

    cout << "----------Example 1-------------" << endl;
    int score{100};
    int *score_add{&score};

    cout << *score_add << endl; // 100
    // dereferencing the pointer
    // it gives the value at address , address which is stored in pointer

    *score_add = 200;

    cout << *score_add << endl; // 200
    cout << score << endl;      // 200

    cout << endl;

    // ----------Example 2-------------

    cout << "----------Example 2-------------" << endl;

    double high_temp{100.7};
    double low_temp{37.4};

    double *temp_ptr{&high_temp};

    cout << *temp_ptr << endl;

    temp_ptr = &low_temp;

    cout << *temp_ptr << endl;

    cout << endl;

    // ----------Example 3-------------

    cout << "----------Example 3-------------" << endl;

    string name{"Krishna"};
    string *string_ptr{&name};

    cout << *string_ptr << endl;
    cout << string_ptr << endl;

    name = "kanha"; // in this case , we did'nt modified pointer , we modified variable

    cout << *string_ptr << endl;
    cout << endl;

    // ----------Example 4-------------

    cout << "----------Example 4-------------" << endl;

    vector<string> stooges{"Ana", "bob", "casie"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    cout << "first stooges " << (*vector_ptr).at(0) << endl;

    cout << "Stooges: ";
    for (auto stooge : *vector_ptr)
    {
        cout << stooge << " ";
    }
    cout << endl;

    cout << endl;

    return 0;
}