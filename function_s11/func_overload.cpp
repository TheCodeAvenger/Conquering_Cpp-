#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int = 100);
void print(double = 12.5);

// void print(int = 100);  used to show error
// void print(double = 12.5);

void print(string);
void print(string, string);
void print(vector<string>);

void print(int num)
{
    cout << "Printing int " << num << endl;
}

void print(double num)
{
    cout << "Printing double " << num << endl;
}

void print(string s)
{
    cout << "Printing string " << s << endl;
}

void print(string s1, string s2)
{
    cout << "Printing string " << s1 << " and " << s2 << endl;
}

void print(vector<string> v)
{
    cout << "Printing vector ";

    for (auto s : v)
    {
        cout << s + " ";
    }
    cout << endl;
}
// main func here

int main()
{

    print(100);
    print("k"); // prints ASCII value

    print(123.5);  // double
    print(123.5F); // float to double

    print("C-style string"); // c-style string into c++ style

    string s{"C== is cool"};
    print(s);

    print("krishna", "namdev");

    vector<string> friends_name{"Alex", "Bob", "Chris"};
    print(friends_name);

    // use it carefully when you're also using default arguments

    // print(); // shows compiler error , because "more than one instance of overload function "print" matches the argument list"
}
