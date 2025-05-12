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
        age = new int;
        *age = *source.age;
        // 👈 NEW memory, same value!
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

class Person
{
private:
    string *name;

public:
    Person(string name_val);      // declared constructor
    Person(const Person &source); // declared copy constructor
    ~Person();                    // declared destructor

    void set_name(string name_val)
    {
        *name = name_val;
    }

    string get_name()
    {
        return *name;
    }
};

Person::Person(string name_val)
{
    name = new string;
    *name = name_val;
    cout << "Constructor called for " << *name << endl;
}

Person::Person(const Person &source)
{
    name = new string;
    *name = (*source.name);
    cout << "Deep constructor (Deep) called for " << *name << endl;
}

Person::~Person()
{
    cout << "Destructor called for " << *name << endl;
    delete name;
}

void display_name(Person p)
{
    cout << p.get_name() << endl;
}

int main()
{
    // Dog d1(5);    // Creates Dog d1
    // Dog d2 = d1;  // Deep copy: d2 gets its own memory
    // d2.display(); // Shows copied value

    // Question 1

    Person p1("Krishna");
    display_name(p1);

    Person p2{p1};
    p2.set_name("Kanha");
    display_name(p2);
    return 0;
}
