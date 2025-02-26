#include <iostream>
using namespace std;

int main()
{

    int num{};
    const int target{10};

    cout << "enter a number and i'll compare it with " << target << endl;
    cin >> num;

    if (num >= target)
    {
        int diff{num - target};
        cout << num << " is greater than " << target << " by " << diff << endl;
    }
    else
    {
        int diff{target - num};
        cout << num << " is lesser than " << target << " by " << diff << endl;
    }
    return 0;
}