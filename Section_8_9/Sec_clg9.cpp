#include <iostream>
#include <vector>

using namespace std;

// What the Program Should Do?
// Display a menu with the following options:

// P → Print the list
// A → Add a number
// M → Calculate and display the mean (average)
// S → Find the smallest number
// L → Find the largest number
// Q → Quit the program
// Handle user input properly

// Accept both uppercase & lowercase (p or P both should work).
// Show an error message if the user enters an invalid choice.

int main()
{

    vector<int> numbers{};
    char selection{};

    do
    {
        // Display menu
        cout << "\nP . Print Numbers" << endl;
        cout << "A . Add a number" << endl;
        cout << "M . Display mean of the numbers" << endl;
        cout << "S . Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << endl;

        cout << "Enter your choice : ";
        cin >> selection;

        cout << "----------------" << endl;

        if (selection == 'P' || selection == 'p')
        {
            if (numbers.size() == 0)
            {
                cout << "[] - the list is empty" << endl;
            }
            else
            {
                cout << "[ ";
                for (auto num : numbers)
                {
                    cout << num << " ";
                }

                cout << "] " << endl;
            }
        }
        else if (selection == 'a' || selection == 'A')
        {
            int num_to_add{};
            cout << "enter a number you want to add : ";
            cin >> num_to_add;

            numbers.push_back(num_to_add);

            cout << num_to_add << " - Added" << endl;
        }
        else if (selection == 'm' || selection == 'M')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to calculate - no data" << endl;
            }
            else
            {
                int total{};
                for (auto num : numbers)
                {
                    total += num;
                }
                cout << "The mean of the numbers is :" << static_cast<double>(total) / numbers.size() << endl;
            }
        }
        else if (selection == 's' || selection == 'S')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to determine the smallest - List is empty" << endl;
            }
            else
            {
                int smallest = numbers.at(0);
                for (auto num : numbers)
                {
                    if (num < smallest)
                    {
                        smallest = num;
                    }
                }
                cout << "The smallest number is :" << smallest << endl;
            }
        }
        else if (selection == 'L' || selection == 'l')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to determine the largest - List is empty" << endl;
            }
            else
            {
                int largest = numbers.at(0);
                for (auto num : numbers)
                {
                    if (num > largest)
                    {
                        largest = num;
                    }
                }
                cout << "The largest number is :" << largest << endl;
            }
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "Goodbye!" << endl;
        }
        else
        {
            cout << "Unknown selection, Please try again" << endl;
        }

    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}