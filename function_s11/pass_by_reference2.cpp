#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &id);
void print_vector(const vector<string> &names);
void pass_by_ref3(vector<string> &names);

int main()
{
    int number1{10};
    int another_number{20};

    cout << "number1 before calling pass_by_ref1 : " << number1 << endl;
    pass_by_ref1(number1);
    cout << "number1 after calling pass_by_ref1 : " << number1 << endl;

    cout << endl;
    //  another example

    cout << "another_number before calling pass_by_ref1 : " << another_number << endl;
    pass_by_ref1(another_number);
    cout << "another_number after calling pass_by_ref1 : " << another_number << endl;

    cout << endl;

    // string example
    string name{"Krishna"};

    cout << "name before calling pass_by_ref2 : " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2 : " << name << endl;
    cout << endl;

    // vector example

    vector<string> friends{"Alex", "Bob", "Casie"};
    cout << "friends before calling pass_by_ref3 : ";
    print_vector(friends);
    cout << "friends after calling pass_by_ref3 : ";
    pass_by_ref3(friends);
}

// defining functions
void pass_by_ref1(int &num)
{
    num = 1000;
}

void pass_by_ref2(string &id)
{
    id = "changed";
}

void print_vector(const vector<string> &names)
{
    for (auto v : names)
    {
        cout << v << " ";
    }
    cout << endl;
}

void pass_by_ref3(vector<string> &names)
{
    names.clear();
}