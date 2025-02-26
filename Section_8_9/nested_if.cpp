#include <iostream>

using namespace std;

int main()
{

    int score{};
    cout << "Enter your score on the exam (0-100) : ";
    cin >> score;
    char letter_grade{}; // Char variable

    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            letter_grade = 'A'; // Use single quotes
        }
        else if (score >= 80)
        {
            letter_grade = 'B'; // Use single quotes
        }
        else if (score >= 70)
        {
            letter_grade = 'C'; // Use single quotes
        }
        else if (score >= 60)
        {
            letter_grade = 'D'; // Use single quotes
        }
        else
        {
            letter_grade = 'F'; // Use single quotes
        }

        cout << "Your grade is : " << letter_grade << endl;

        if (letter_grade == 'F')
        {
            cout << "Fail hogya tu chutiye !" << endl;
        }
    }

    else
    {
        cout << "Sorry " << score << " is not in range" << endl;
    }
    cout << endl;
    return 0;
}
