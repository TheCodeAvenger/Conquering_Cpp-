#include <iostream>
#include <cstring> // for strlen
using namespace std;

void reverseCharArray(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end)
    {
        // Swap
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[] = "krishna";

    reverseCharArray(str);

    cout << "Reversed: " << str << endl;

    return 0;
}
