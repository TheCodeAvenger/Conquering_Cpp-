#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declaring and initializing
    string s1;               // empty
    string s2{"krishna"};    // krishna
    string s3{s2};           // krishna
    string s4{"Krishna", 3}; // kri
    string s5{s3, 0, 2};     // starts at index zero , length is 2 = kr
    string s6(3, 'X');       // XXX

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;

    // assignment  op "="

    string str1;
    str1 = "c++ sucks!";

    string str2{"fuck off !"};

    str2 = str1;
    cout << str2 << endl; // in c style , we have to use strcpy method , in c++ string we can do it using = op

    // concatenation

    string part1{"C++"};
    string part2{"Is a powerfull"};
    string sentence{};

    sentence = part1 + " " + part2 + " language"; // C++ Is a powerfull language
    cout << sentence << endl;

    // sentence= "C++" +" is a powerful"; //illegal way
    return 0;
}