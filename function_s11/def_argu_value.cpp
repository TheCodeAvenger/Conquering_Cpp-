#include <iostream>

using namespace std;

double calculate_cost(double base_cost, double tax_rate = 0.06);

double calculate_cost(double base_cost, double tax_rate)
{
    return base_cost += (base_cost * tax_rate);
}

int main()
{

    double cost{0};
    cost = calculate_cost(200.0);       // will use default tax value
    cost = calculate_cost(100.0, 0.08); // will use 0.08 ,not the default tax value

    return 0;
}