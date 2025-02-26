#include <iostream>

using namespace std;

// ask user what grade they expect on an exam
// and tell them what they need to score to get it

int main()
{
    char letter_grade{};

    cout << "Enter the grade you expect on the exam :";
    cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "You need 90 or above marks !" << endl;
        break;

    case 'b':
    case 'B':
        cout << "You need 80-89 for B !" << endl;
        break;

    case 'c':
    case 'C':
        cout << "You need 70-79 for C !" << endl;
        break;

    case 'd':
    case 'D':
        cout << "You need 60-69 for D , try for better grades" << endl;
        break;

    case 'f':
    case 'F':
    {
        char confirm{};
        cout << "Are you sure(Y/N) ?";
        cin >> confirm;

        if (confirm == 'Y' || confirm == 'y')
        {
            cout << "Okay , i guess you didn't study..." << endl;
        }
        else if (confirm == 'n' || confirm == 'N')
        {
            cout << "Good , go study kid..." << endl;
        }
        else
        {
            cout << "Illegal choice " << endl;
        }
    }
    break;

    default:
        cout << "sorry that's not a valid case" << endl;
        break;
    }

    return 0;
}