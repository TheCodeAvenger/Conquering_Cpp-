#include <iostream>

using namespace std;

int main()
{
    // ex 1

    // int i{1};
    // while (i <= 5)
    // {
    //     cout << i << endl;
    //     ++i;
    // }
    // return 0;

    // ex 2

    // int i{1};
    // while (i <= 20)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //         ++i;
    //     }
    // }

    // ex 3

    // int number{};
    // cout << "Enter a integer less than 100 :";
    // cin >> number;

    // while (number >= 100)
    // {
    //     cout << "Enter a integer less than 100 :";
    //     cin >> number;
    // }

    // cout << "Thanks " << endl;

    // ex 4
    // int number{};
    // cout << "Enter a integer between 1 and 5 :";
    // cin >> number;

    // while (number <= 1 || number >= 5)
    // {
    //     cout << "Enter a integer between 1 and 5  :";
    //     cin >> number;
    // }

    // cout << "Thanks " << endl;

    // ex 5
    //     int num{};
    //     cout << "enter an integer - start the count down :";
    //     cin >> num;

    //     while (num > 0)
    //     {
    //         cout << num << endl;
    //         --num;
    //     }
    //     cout << "BlastOFF !" << endl;

    // ex 6

    // int num{};
    // cout << "enter a positive integer -  to count up to :";
    // cin >> num;

    // int i{1};
    // while (num >= i)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // ex 7
    bool done{false};
    int num{};

    while (!done)
    {
        cout << "Enter an number between 1 and 5 :";
        cin >> num;

        if (num <= 1 || num >= 5)
        {
            cout << "Out of range , try again " << endl;
        }
        else
        {
            cout << "Thanks!" << endl;
            done = true;
        }
    }
}