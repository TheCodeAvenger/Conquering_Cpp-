#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // for (int i = 1; i <= 4; ++i)
    // {
    //     for (int j = 1; j <= 10; ++j)
    //     {
    //         cout << i << " * " << j << " = " << i * j << endl;
    //     }
    //     cout << "------------------" << endl;
    // }

    // ex 2
    // int grid[5][3];
    // for (int row = 0; row < 5; ++row)
    // {
    //     for (int col = 0; col < 3; ++col)
    //     {
    //         grid[row][col] = 1000;
    //     }
    // }

    // for (int row = 0; row < 5; ++row)
    // {
    //     for (int col = 0; col < 3; ++col)
    //     {
    //         cout << grid[row][col] << endl;
    //     }
    // }

    // ex 3

    int num_items{};
    cout << "how many data items you have : ";
    cin >> num_items;

    vector<int> data{};
    for (int i = 1; i <= num_items; i++)
    {
        int data_item{};
        cout << "enter data item " << i << ":";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\nDisplay histogram" << endl;

    for (auto val : data)
    {
        for (int i{1}; i <= val; ++i)
        {
            cout << "-";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}