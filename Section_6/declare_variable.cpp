#include <iostream>

using namespace std;

int main()
{

    int room_width{0};

    cout << "enter width of room ";
    cin >> room_width;

    int room_length{0};

    cout << "enter length of room ";
    cin >> room_length;

    cout << "the aream of room is" << room_width * room_length << "square meter" << endl;

    return 0;
}