#include <iostream>

using namespace std;

int main()
{

    int length{}, width{}, height{};
    double base_cost{2.50};

    const int tier1_threshold{100}; // volume , isse jyada exceed hua to extra 10% charge lgega
    const int tier2_threshold{500}; // volume , isse jyada exceed hua to extra 25% charge lgega

    int max_dimension{10};

    double tier1_extra_charge{0.10}; // 10% extra
    double tier2_extra_charge{0.25}; // 25% extra

    // all dimensions must me 10 inches or low
    // if they exceed limit , then shipping gets cancelled
    //  and if volume of item exceeded limit then 10 and 25% charges are conducted

    int package_volume{};
    cout << "Welcome to package shipping cost calculator" << endl;
    cout << "Enter length , width , height of package separated by spaces :";

    cin >> length >> width >> height;

    if (length > max_dimension || width > max_dimension || height > max_dimension)
    {
        cout << "Sorry ,package rejected , dimensions exceeded" << endl;
    }
    else
    {
        double package_cost{};
        package_volume = length * width * height;
        package_cost = base_cost;

        if (package_volume > tier2_threshold)
        {
            package_cost = package_cost + package_cost * tier2_extra_charge;
            cout << "adding tear 2 extra charges" << endl;
        }
        else if (package_volume > tier1_threshold)
        {
            package_cost = package_cost + package_cost * tier1_extra_charge;
            cout << "adding tear 1 extra charges" << endl;
        }

        cout << "volume of package is : " << package_volume << endl;
        cout << "Your package will cost $ : " << package_cost << " to ship " << endl;
    }

    cout << endl;
}