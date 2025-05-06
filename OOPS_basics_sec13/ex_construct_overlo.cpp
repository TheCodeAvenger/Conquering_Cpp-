// Practice Coding Problems – Constructor Overloading

// 🚗 1. Create a Car class
// 🧩 Requirements:

// Default constructor: sets brand to "Unknown", year to 0

// One-arg constructor: takes brand

// Two-arg constructor: takes brand and year

// A display() function to print details.

#include <iostream>
#include <string>
using namespace std;

class Car
{

private:
    string brand;
    int year;

public:
    Car()
    {
        brand = "Unknown";
        year = 0;
        cout << "A" << endl;
    }

    Car(string brand_name)
    {
        brand = brand_name;
        year = 0;
        cout << "B" << endl;
    }

    Car(string brand_name, int year_val)
    {
        brand = brand_name;
        year = year_val;
        cout << "C" << endl;
    }

    void display()
    {
        cout << "Brand: " << brand << " , Year: " << year << endl;
    }
};

int main()
{
    Car c1;
    Car c2("Tesla");
    Car c3("BMW", 2);

    c1.display();
    c2.display();
    c3.display();

    return 0;
}