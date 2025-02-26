#include <iostream>

using namespace std;
int main()
{
    // creating a carpet cleaning service

    cout << "Frank\'s carpet cleaning service : " << endl;

    cout << "\nHow many rooms would you like cleaned ? " << endl;

    int num_of_small_rooms{0};
    int num_of_large_rooms{0};

    cout << "enter number of small rooms : ";
    cin >> num_of_small_rooms;

    cout << "enter number of large rooms : ";
    cin >> num_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << " number of small rooms is : " << num_of_small_rooms << endl;

    cout << " number of large rooms is : " << num_of_large_rooms << endl;

    const double price_per_small_room{25};
    const double price_per_large_room{35};

    cout << "price per small room is : $" << price_per_small_room << endl;

    cout << "price per large room is : $" << price_per_large_room << endl;

    cout << " cost is :$" << (num_of_small_rooms * price_per_small_room) + (num_of_large_rooms * price_per_large_room) << endl;

    double tax_rate{0.06};

    double total_tax{(num_of_small_rooms * price_per_small_room * tax_rate) + (num_of_large_rooms * price_per_large_room * tax_rate)};

    cout << " total tax is :$" << total_tax << endl;

    cout << "=============================================" << endl;

    cout << "Total estimate : $" << (num_of_small_rooms * price_per_small_room) + (num_of_large_rooms * price_per_large_room) + total_tax << endl;

    cout << "this estimate is valid for 30 days" << endl;
    return 0;
}
