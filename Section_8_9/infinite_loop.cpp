#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        char again{};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> again;

        // Check for invalid input
        if (again != 'Y' && again != 'y' && again != 'N' && again != 'n')
        {
            cout << "Invalid input! Please enter 'Y' or 'N'." << endl;
            continue; // Ask again without breaking the loop
        }

        // If the user enters 'N' or 'n', exit the loop
        if (again == 'N' || again == 'n')
        {
            break;
        }
    }

    cout << "Loop exited successfully." << endl;
    return 0;
}
