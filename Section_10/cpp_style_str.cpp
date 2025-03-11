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

    // accesing elements using [] and .at()

    cout << part2[1] << endl;
    cout << part2.at(0) << endl;

    part1[1] = 'p';
    part1[2] = 'p';

    // loop to display string

    string name{"krishna"};

    for (int c : name)
    {
        cout << c << endl;
    }

    // substring
    // using substr() method
    // object.substr(start_index , length)

    string test{"this is a test"};

    cout << test.substr(0, 4) << endl;
    cout << test.substr(10, 4) << endl;

    // searching
    // using - .find(search_string)

    cout << test.find("a") << endl;
    cout << test.find("est") << endl;

    // remove char using erase() and clear()

    cout << test.erase(0, 5) << endl; // is a test
    cout << test.erase(5, 4) << endl; // is a
    test.clear();                     // clear entire string

    // other methods
    // .length()

    string leng("hello");
    cout << leng.length() << endl;

    leng += "krishna";
    cout << leng << endl;

    // ->wrong method // string name{};
    // cout << "Enter your name :" << endl;
    // cin.getline(name);
    // cout << "Your name is : " << name << endl;

    string ss;
    cout << "enter something something :";
    cin >> ss;
    cout << ss << endl; // only accept up to first space

    getline(cin, ss); // read entire line until \n
    cout << ss << endl;

    getline(cin, ss, 'a');
    cout << ss << endl;

    return 0;
}