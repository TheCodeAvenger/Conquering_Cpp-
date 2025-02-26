#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // ex 1

    // int score[]{100, 90, 80, 70};

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << score[i] << endl;
    // }

    // ex 2

    // for (int i{1}, j{2}; i <= 10; i++)
    // {
    //     cout << j << " * " << i << " = " << (j * i) << endl;
    // }

    // ex 3

    // for (int i = 3; i <= 30; i += 3)
    // {
    //     cout << i << endl;
    // }

    // ex 4
    // reverse countdown

    // for (int i = 10; i > 0; --i)
    // {
    //     cout << i << endl;
    // }
    // cout << "Blastoff !" << endl;

    // ex 5
    // divisible

    // for (int i = 10; i <= 100; i += 10)
    // {
    //     if (i % 20 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // ex 6

    // for (int i{1}; i <= 100; i++)
    // {
    //     cout << i << "";
    //     cout << "";
    //     if (i % 5 == 0)
    //     {
    //         cout << endl;
    //     }
    //     else
    //     {
    //         cout << "";
    //     }
    //     }

    // ex 7
    vector<int> nums{10, 20, 30, 40, 50};
    for (unsigned i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
}