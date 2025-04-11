#include <iostream>

using namespace std;

void local_variable();
void global_variable();
void static_local_variable();

int num{300}; // global variable

void global_variable()
{
    cout << "\nglobal number is " << num << " in global_example -start" << endl;
    num *= 2;
    cout << "\nglobal number is " << num << " in global_example -end" << endl;
}

void local_variable(int x)
{
    int num{1000}; // local
    cout << "\nLocal number is " << num << " in local_example -start" << endl;
    num = x;
    cout << "\nLocal number is " << num << " in local_example -end" << endl;
}

void static_local_variable()
{
    static int num{5000}; // local to static- retains its value between calls
    cout << "\nlocal static num is " << num << " in static_local_example -start" << endl;
    num += 1000;
    cout << "\nlocal static num is " << num << " in static_local_example -end" << endl;
}

int main()
{
    local_variable(10);
    local_variable(20);

    global_variable();
    global_variable();

    static_local_variable();
    static_local_variable();
    static_local_variable();
}
