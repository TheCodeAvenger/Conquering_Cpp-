#include <iostream>

using namespace std;

void say_hello(std::string name)
{
    cout << "Hello ! " << name << endl;
}

int main()
{

    say_hello("Krishna");

    std::string my_dog{"Bruno"};

    say_hello(my_dog);
    return 0;
}