#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s3};
    string{s1, 0, 3};
    string(10, 'X');

    // cout << s0 << endl; // no garbage value
    // cout << s0.length() << endl;

    // // comparison
    // cout << boolalpha;
    // cout << s1 << "==" << s5 << ":" << (s1 == s5) << endl;
    // cout << s1 << "==" << s2 << ":" << (s1 == s2) << endl;
    // cout << s1 << "!=" << s2 << ":" << (s1 != s2) << endl;
    // cout << s1 << "<" << s5 << ":" << (s1 < s2) << endl;
    // cout << s1 << "==" << "Apple" << ":" << (s1 == "Apple") << endl;

    // // assignment

    // s1 = "Mango";
    // cout << "s1 is now : " << s1 << endl;
    // s2 = s1;
    // cout << "s2 is now : " << s2 << endl;

    // s3 = "Krishna";
    // cout << "s3 is now : " << s3 << endl;

    // s3[0] = 'C';
    // cout << "s3 first letter is now changed to 'C' : " << s3 << endl;

    // s3.at(1) = 'i';
    // cout << "s3 second letter is now changed to 'i' : " << s3 << endl;

    // concatenation
    // s3 = "Watermelon";z

    // for loop

    // s1 = "Apple";
    // for (size_t i{0}; i < s1.length(); ++i)
    // {
    //     cout << s1.at(i);
    // }
    // cout << endl;

    // range based for loop

    // for (char c : s1)
    // {
    //     cout << c;
    // }
    // cout << endl;

    // substring

    // s2 = "This is a test";
    // cout << s2.substr(0, 9) << endl;

    // find

    cout << "-------------------Find------------------" << endl;

    s1 = "hello my dear krishna";
    string word{};
    cout << "enter word to find :";
    cin >> word;

    size_t position = s1.find(word);
    if (position != string::npos) // npos=null position
    {
        cout << "Found   " << word << " at position " << position << endl;
    }
    else
    {
        cout << "Sorry" << word << " not found " << endl;
    }
}