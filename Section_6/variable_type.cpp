#include <iostream>
using namespace std;
int main()
{

    // character type

    char start_letter{'k'};
    cout << "my name starts with " << start_letter << endl;

    // integer type

    short int exam_score{56};
    cout << "my exam score is" << exam_score << endl;

    int total_countries{195};
    cout << "total countries in world is : " << total_countries << endl;

    long indore_population{8'00'000};
    cout << "total population of indore is : " << indore_population << endl;

    long long distance_to_alpha_centuri{9'423'000'000'000};
    cout << "distance to alpha century is : " << distance_to_alpha_centuri << endl;

    // floating type

    float car_payment{405.23};
    cout << "car payment : " << car_payment << endl;

    double pi{3.14159};
    cout << "pi value : " << pi << endl;

    long double large_amount{2.7e120};
    cout << "large amount : " << large_amount << endl;

    // Boolean type

    bool game_over{false};
    cout << "game over value :" << game_over << endl;

    // overflow example

    // short value1{3000};
    // short value2{1000};

    // cout << "the sum of " << value1 << "and " << value2 << " is :" << endl;
    return 0;
}