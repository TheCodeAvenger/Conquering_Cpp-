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

    bool deposit(double bal)
    {
        balance += bal;
        cout << "In Deposit" << endl;
    }

    bool withdraw(double bal)
    {
        balance -= bal;
        cout << "In Withdraw " << endl;
    }
};

int main()
{
    Account krishna_account;
    krishna_account.name = "Krishna's account ";
    krishna_account.balance = 5000.0;

    krishna_account.deposit(1000.0);
    krishna_account.withdraw(500.0);

    Player Frank;
    Frank.name = "Frank";
    Frank.health = 100;
    Frank.xp = 12;
    Frank.talk(" Hi there");

    Player *enemy = new Player; // enemy is pointer to Player object
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I'll Destroy you");

    return 0;
}