#include <iostream>

using namespace std;

int main()
{

    //     int number{};

    //     do
    //     {
    //         cout << "enter a number between 1 to 5 :";
    //         cin >> number;
    //     } while (number <= 1 || number >= 5);

    //     cout << "Thanks" << endl;
    //

    // ex 2 area calculator
    // char selection{};
    // do
    // {
    //     double length{}, width{};

    //     cout << "Enter length and width separated by a space : ";
    //     cin >> length >> width;

    //     double area{length * width};
    //     cout << "the area of rectangle is :" << area << endl;

    //     cout << "Another calculation ? (Y/N)";
    //     cin >> selection;
    // } while (selection == 'Y' || selection == 'y');

    // cout << "Thanks!" << endl;

    // ex 3 - select a option

    char selection{};
    do
    {

        cout << "-----------------------------" << endl;
        cout << "1.Do this" << endl;
        cout << "2.Do that" << endl;
        cout << "3.do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection :";
        cin >> selection;

        if (selection == '1')
        {
            cout << "You code 1 - Doing this" << endl;
        }
        else if (selection == '2')
        {
            cout << "You code 2 - Doing that" << endl;
        }
        else if (selection == '3')
        {
            cout << "You code 3 - Doing something else" << endl;
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "Goodbye" << endl;
        }
        else
        {
            cout << "unknown option --try again..." << endl;
        }

    } while (selection != 'Q' && selection != 'q');

    cout << endl;
    return 0;
}
