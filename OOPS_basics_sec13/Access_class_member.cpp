// section 13
// declare Classes and objects

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
public:
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }

    bool is_dead();
};

class Account
{
public:
    // attributes
    string name{"Account"};
    double balance{0.0};

    // methods

    bool deposit(double);
    bool widthdrawl(double);
};

int main()
{
    Player Frank;
    Frank.name = "Frank";
    Frank.health = 100;
    Frank.xp = 12;
    Frank.talk(" Hi there");
    return 0;
}