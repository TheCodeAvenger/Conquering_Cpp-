#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // cout << first_name; // willl get garbage value

    // cout << "enter your first name :";
    // cin >> first_name;

    // cout << "enter your last name :";
    // cin >> last_name;

    // cout << "---------------------------" << endl;

    // cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // strcpy(full_name, first_name); // copy first name to full name
    // strcat(full_name, " ");        // concatenate full_name and a space
    // strcat(full_name, last_name);  // concatenate last_name to full name

    // cout << "Your full name is " << full_name << endl;

    // cout << "Enter your full name :";
    // cin >> full_name;
    // cout << full_name << endl; // if you write krishna namdev , it will only show "krishna"
    // so we use a different way of takin string as input, we use getline() :

    cout << "Enter your full name :";
    cin.getline(full_name, 50);
    cout << full_name << endl;
}