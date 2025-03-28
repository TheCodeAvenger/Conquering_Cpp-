#include <iostream>

using namespace std;

const double pi{3.14159};

// function prototype

void area_circle();
void volume_cylinder();
double calc_area_circle(double radius);
double calc_cylinder_vol(double radius, double height);

int main()
{

    area_circle();
    volume_cylinder(); // pi r r h
}

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