#include <iostream>
using namespace std;

int main()
{

    int counter{10};
    int result{0};

    // example 1 :simple increement

    // cout << "counter :" << counter << endl;

    // counter = counter + 1;
    // cout << "counter :" << counter << endl;

    // // postfix
    // counter++;
    // cout << "counter :" << counter << endl;

    // // prefix
    // ++counter;
    // cout << "counter :" << counter << endl;

    // example 2: preincreement

    // counter = 10;
    // result = 0;
    // cout << "counter :" << counter << endl;

    // result = ++counter;
    // cout << "counter :" << counter << endl;
    // cout << "result :" << result << endl;

    // example 3: postincreement

    //     counter = 10;
    //     result = 0;
    //     cout << "counter :" << counter << endl;

    //     result = counter++;
    //     cout << "counter :" << counter << endl;
    //     cout << "result :" << result << endl;

    // example 4

    // counter = 10;
    // result = 0;
    // cout << "counter :" << counter << endl;
    // result = ++counter + 10;
    // cout << "counter :" << counter << endl;

    // cout << "result :" << result << endl;

    // example 5

    counter = 10;
    result = 0;
    cout << "counter :" << counter << endl;
    result = counter++ + 10;

    cout << "result :" << result << endl;
    cout << "counter :" << counter << endl;

    // Cautious :  never use it twice in same statemeny;
    // also don't overuse it!

    return 0;
}
