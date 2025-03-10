#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for columns
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
