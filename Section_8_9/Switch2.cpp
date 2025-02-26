// using switch with enumeration

#include <iostream>
using namespace std;

int main()
{

    enum Directions
    {
        left,
        right,
        up,
        down
    };

    Directions heading{left};

    switch (heading)
    {
    case left:
        cout << "Going left" << endl;
        break;

    case right:
        cout << "Going right" << endl;
        break;

    case up:
        cout << "Going up" << endl;
        break;

    case down:
        cout << "Going down" << endl;
        break;

    default:
        cout << "Invalid direction" << endl;
    }
    cout << endl;
}