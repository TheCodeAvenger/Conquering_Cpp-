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
void display_menu();
char get_selection();
void handle_display(const vector<int> &v);
void display_list(const vector<int> &v);

void handle_add(vector<int> &v);
void handle_mean(vector<int> &v);
void handle_smallest(vector<int> &v);
void handle_largest(vector<int> &v);
void handle_quit();
void handle_unknown();

double calculate_mean(const vector<int> &v);
void display_list(vector<int> &v);
int find_smallest(vector<int> &v);
int find_largest(vector<int> &v);

int main()
{
    vector<int> numbers; // list of numbers
    char selection{};

    do
    {
        display_menu();
        selection = get_selection();

        switch (selection)
        {
        case 'P':
            handle_display(numbers);

            break;

        case 'A':
            handle_add(numbers);
            break;

        case 'M':
            handle_mean(numbers);
            break;

        case 'S':
            handle_smallest(numbers);
            break;

        case 'L':
            handle_largest(numbers);
            break;

        case 'Q':
            handle_quit();
            break;

        default:
            handle_unknown();
            break;
        }

    } while (selection != 'Q');

    return 0;
}

// <----------defining functions----------->

void display_menu()
{

    cout << "\nP : Print the list" << endl;
    cout << "A : Add a number" << endl;
    cout << "M : Calculate and display the mean (average)" << endl;
    cout << "S : Find the smallest number" << endl;
    cout << "L : Find the largest number" << endl;
    cout << "Q : Quit the program" << endl;

    cout << "Enter your choice : ";
}

char get_selection()
{
    char selection{};
    cin >> selection;
    return toupper(selection);
}

void handle_display(const vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "[] - The list is empty" << endl;
    }
    else
    {
        display_list(v);
    }
}

void display_list(const vector<int> &v)
{
    cout << "[ ";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << " ]" << endl;
}

void handle_add(vector<int> &v)
{
    int number_to_add{};
    cout << "Enter the number you want to add : ";
    cin >> number_to_add;
    v.push_back(number_to_add);
    cout << number_to_add << " added" << endl;
}

void handle_mean(vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "Unable to calculate mean - list is empty" << endl;
    }
    else
    {
        cout << "the mean is " << calculate_mean(v) << endl;
    }
}

double calculate_mean(const vector<int> &v)
{
    int total{};
    for (auto num : v)
    {
        total += num;
    }
    return static_cast<double>(total) / v.size();
}

void handle_smallest(vector<int> &v)
{

    if (v.size() == 0)
    {
        cout << "Cannot find the smallest number - list is empty " << endl;
    }
    else
    {
        cout << "smallest number is :" << find_smallest(v) << endl;
    }
}

int find_smallest(vector<int> &v)
{
    int smallest = v.at(0);
    for (auto num : v)
    {
        if (num < smallest)
        {
            smallest = num;
        }
    }
    return smallest;
}

void handle_largest(vector<int> &v)
{

    if (v.size() == 0)
    {
        cout << "Cannot find the largest number - list is empty " << endl;
    }
    else
    {
        cout << "largest number is :" << find_largest(v) << endl;
    }
}

int find_largest(vector<int> &v)
{
    int largest = v.at(0);
    for (auto num : v)
    {
        if (num > largest)
        {
            largest = num;
        }
    }
    return largest;
}

void handle_quit()
{
    cout << "Goodbye !" << endl;
}

void handle_unknown()
{
    cout << "Unknown selection - try again " << endl;
}