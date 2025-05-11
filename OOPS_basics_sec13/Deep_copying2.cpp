#include <iostream>
using namespace std;

class Dog
{
private:
    int *age; // Pointer to dynamically allocated memory

public:
    // Constructor
    Dog(int age_value)
    {
        age = new int(age_value); // Creating new memory
        cout << "Constructor called" << endl;
    }

    // Deep Copy Constructor
    Dog(const Dog &source)
    {
        age = new int(*source.age); // 👈 NEW memory, same value!
        cout << "Deep Copy constructor called!" << endl;
    }

    // Destructor
    ~Dog()
    {
        delete age; // Free the memory
        cout << "Destructor called. Memory Freed!" << endl;
    }

    void display()
    {
        cout << "Age: " << *age << endl;
    }
};

int main()
{
    Dog d1(5);    // Creates Dog d1
    Dog d2 = d1;  // Deep copy: d2 gets its own memory
    d2.display(); // Shows copied value
    return 0;
}
