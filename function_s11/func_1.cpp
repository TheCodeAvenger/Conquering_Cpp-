#include <iostream>
using namespace std;

int add_numbers(int a, int b)
{
    return a + b;
}

void say_world()
{
    cout << "world" << endl;
    cout << "Bye from say_world" << endl;
}

void say_hello()
{
    cout << "Hello" << endl;
    say_world();
    cout << "Bye from say_hello" << endl;
}
const double pi{3.14159};

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

void area_circle()
{
    double radius{};
    cout << "Enter the radius";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

double calc_cylinder_vol(double radius, double height)
{
    return pi * radius * radius * height;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "enter Height of cylinder : ";
    cin >> height;

    cout << "enter radius of cylinder : ";
    cin >> radius;

    cout << "the volume of cylinder with radius " << radius << " and height " << height << " is : " << calc_cylinder_vol(radius, height) << endl;
}

int main()
{

    cout << add_numbers(20, 50) << endl;

    say_hello();
    cout << "Bye from main" << endl;

    cout << "----------------next example---------------" << endl;

    //
    area_circle();
    volume_cylinder(); // pi r r h
}