#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
    int *age;

public:
    // constructor
    Dog(int age_value)
    {
        age = new int(age_value);
        cout << "Constructor Called" << endl;
    }

    // copy constructor
    Dog(const Dog &source)
        : age(source.age) // shallow copy-  copying pointer directly
    {
        cout << "Copy construyctor called !" << endl;
    }

    ~Dog()
    {
        delete age;
        cout << "Memory Freed !" << endl;
    }

    void display()
    {
        cout << "Age : " << *age << endl;
    }
};

int main()
{

    Dog d1(5);
    Dog d2 = d1;
    d2.display();
    return 0;
}