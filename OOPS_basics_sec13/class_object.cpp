// section 13
// declare Classes and objects

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string);

    bool is_dead();
};

class Account
{
    // attributes
    string name;
    double balance;

    // methods

    bool deposit(double);
    bool widthdrawl(double);
};

int main()
{
    Account krishna_account;
    Account Frank_account;

    Player krishna;
    Player Frank;

    Player player[]{krishna, Frank}; // collection of Player objects

    vector<Player> player_vec{Frank}; // collection of Player objects
    player_vec.push_back(krishna);

    Player *enemy{nullptr};
    enemy = new Player;

    return 0;
}