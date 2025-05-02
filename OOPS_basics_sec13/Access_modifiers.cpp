#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    // attributes
    string name{"Player"};
    int xp;
    int health;

public:
    // methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }

    bool is_dead();
};

class superhero
{
public:
    string name;

private:
    int power_level{1000};

protected:
    string secret_name;

public:
    void setSecret(string s)
    {
        secret_name = s;
    }

    void show_details()
    {
        cout << "Hero name : " << name << endl;
        cout << "power level : " << power_level << endl;
        cout << "secret name : " << secret_name << endl;
    }
};

int main()
{
    Player krishna;
    // krishna.name = "krishna";
    // cout<<krishna.health<<endl;

    krishna.talk("Hello there !");

    // example 2 superhero

    superhero ironman;
    ironman.name = "IronMan";
    // ironman.power_level = 1000;
    // ironman.secret_name = "Tony";

    ironman.setSecret("Tony Stark");

    ironman.show_details();
    return 0;
}