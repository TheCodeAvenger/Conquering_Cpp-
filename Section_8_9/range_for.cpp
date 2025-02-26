#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{

    // int scores[]{100, 90, 80, 70};
    // for (int score : scores)
    // {
    //     cout << score << endl;
    // }

    // ex 2 using vector
    //     vector<double> temps{86.2, 34.5, 66.8, 89.4, 46.9};

    //     double running_sum{};
    //     double average_temp{};

    //     for (auto temp : temps)
    //     {
    //         running_sum = running_sum + temp;
    //     }
    //     average_temp = running_sum / temps.size();
    //     cout << average_temp;
    //

    // ex 3
    // for (auto : "Frank")
    // {
    //     cout << c << endl;
    // }

    // int scores[]{10, 20, 30};

    // for (auto score : scores)
    // {
    //     cout << score << endl;
    // }

    // vector<double> temperatures{56.7, 45.8, 37.8, 55.9, 46.9};

    // double total{};
    // double total_average{};

    // for (auto temp : temperatures)
    // {
    //     total += temp;
    // }
    // if (temperatures.size() != 0)
    // {
    //     total_average = total / temperatures.size();
    // }
    // cout << fixed << setprecision(1); // control the formatting of floating-point numbers
    // cout << "Average temperatur is : " << total_average << endl;

    // ex 4
    // for (auto val : {1, 2, 3, 4, 5})
    // {
    //     cout << val << endl;
    // }

    // ex 5
    // for (auto c : "This is a test")
    // {
    //     if (c != ' ')
    //     {
    //         cout << c;
    //     }
    // }

    // ex 6
    for (auto c : "This is a test")
    {
        if (c == ' ')
        {
            cout << "\n";
        }
        else
        {
            cout << c;
        }
    }
    return 0;
}