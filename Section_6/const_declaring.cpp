#include <iostream>

using namespace std;
int main()
{

    cout << "Frank\'s carpet cleaning service " << endl;

    cout << "\nHow many rooms would you like cleaned ? " << endl;

    int num_of_rooms{0};
    cout << "enter number of rooms : ";
    cin >> num_of_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << " number of rooms is : " << num_of_rooms << endl;

    int price_per_room{30};
    cout << "price per room is : $" << price_per_room << endl;

    cout << " cost is :$" << num_of_rooms * price_per_room << endl;

    double tax_rate{0.06};

    double total_tax{num_of_rooms * price_per_room * tax_rate};

    cout << " total tax is :$" << total_tax << endl;

    cout << "=============================================" << endl;

    cout << "Total estimate : $" << (price_per_room * num_of_rooms) + total_tax << endl;
    return 0;
}
