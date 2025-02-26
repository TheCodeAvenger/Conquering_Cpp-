#include <iostream>

using namespace std;

int main()
{
    // int num{};
    // const int lower{10};
    // const int upper{20};

    cout << boolalpha;

    // example 1 :determine if the entered integer is between two other integer
    // assume lower< upper

    // cout << "enter an integer-the bounds are " << lower << "and" << upper << ":";

    // cin >> num;

    // bool within_bounds{false};

    // within_bounds = (num > lower && num < upper);

    // cout << num << " is between " << lower << " and " << upper << ":" << within_bounds << endl;

    // example 2 determine if the entered integer is outside the boundary

    // cout << "enter an integer-the bounds are " << lower << "and" << upper << ":";

    // cin >> num;

    // bool outside_bounds{false};

    // outside_bounds = (num < lower || num > upper);

    // cout << num << " is not between " << lower << " and " << upper << ":" << outside_bounds << endl;

    // example 3 -determines if an entered integer is exactly on boundary

    // cout << "enter an integer-the bounds are " << lower << "and" << upper << ":";

    // cin >> num;

    // bool on_bounds{false};

    // on_bounds = (num == lower || num == upper);

    // cout << num << " is on one of the boundary which is : " << lower << " and " << upper << ":" << on_bounds << endl;

    //  example 4 - determine you need to wear a coat based on temperature and windspeed

    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    const int wind_speed_for_coat{25};     // wind over this value require wearing coat
    const double temperature_for_coat{45}; // temperature below this require wearing coat

    // require a coat if either wind is too high or temperature is too low
    cout << "enter wind speed in (mph) :";
    cin >> wind_speed;

    cout << "enter current temperature in (F) :";
    cin >> temperature;

    wear_coat = (wind_speed > wind_speed_for_coat || temperature < temperature_for_coat);
    cout << "do you need to wear a coat in current situation using OR : " << wear_coat << endl;

    //    require a coat if both the conditions are true
    wear_coat = (wind_speed > wind_speed_for_coat && temperature < temperature_for_coat);
    cout << "do you need to wear a coat in current situation using AND : " << wear_coat << endl;
    return 0;
}