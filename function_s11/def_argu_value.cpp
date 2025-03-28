#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// double calculate_cost(double base_cost, double tax_rate = 0.06);

// double calculate_cost(double base_cost, double tax_rate)
// {
//     return base_cost += (base_cost * tax_rate);
// }

double calculate_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);

double calculate_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix = "Mr.", string suffix = " ");

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello ! " << prefix + " " + name + " " << suffix << endl;
}

int main()
{
    greeting("Glenn Jones", "Dr.", "M.D");
    greeting("bucky barns", "Professor", "phD");
    greeting("Frank miller", "Dr.");
    greeting("william smith");

    greeting("Marry howard", "Mrs.", "ph.d");

    // double cost{};
    // cost = calculate_cost(200.0);       // will use default tax value
    // cost = calculate_cost(100.0, 0.08); // will use 0.08 ,not the default tax value

    double cost{0};
    cost = calculate_cost(100.0, 0.08, 4.25);

    cout << fixed << setprecision(2);

    cout << "Cost is " << cost << endl; // 112.25

    cost = calculate_cost(100.0, 0.08);
    cout << "Cost is " << cost << endl; // 111.50

    cost = calculate_cost(100.0);
    cout << "Cost is " << cost << endl; // 109.50

    cost = calculate_cost();
    cout << "Cost is " << cost << endl; // 109.50

    return 0;
}