// #include <iostream>
// #include <string>

// using namespace std;

// class Player
// {
// private:
//     string name;
//     int health;
//     int xp;

// public:
//     // Default constructor
//     Player()
//     {
//         name = "None";
//         health = 0;
//         xp = 0;
//         cout << "Default constructor called\n";
//     }

//     // One-argument constructor
//     Player(string name_val)
//     {
//         name = name_val;
//         health = 100;
//         xp = 50;
//         cout << "One-arg constructor called\n";
//     }

//     // Three-argument constructor
//     Player(string name_val, int health_val, int xp_val)
//     {
//         name = name_val;
//         health = health_val;
//         xp = xp_val;
//         cout << "Three-arg constructor called\n";
//     }

//     void display()
//     {
//         cout << "Name: " << name << ", Health: " << health << ", XP: " << xp << endl;
//     }
// };

// int main()
// {
//     Player p1;                   // Default
//     Player p2("Krishna");        // One-arg
//     Player p3("Boss", 200, 100); // Three-arg

//     p1.display();
//     p2.display();
//     p3.display();

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Player
{

private:
    string name;
    int health;
    int xp;

public:
    //  let's create constructors

    Player()
    {
        name = "None";
        health = 100;
        xp = 0;
        cout << "NO args constructor called" << endl;
    }

    Player(string name_val)
    {
        name = name_val;
        health = 200;
        xp = 1;
        cout << "one args constructor called" << endl;
    }

    Player(string name_val, int health_val)
    {
        name = name_val;
        health = health_val;
        xp = 2;
        cout << "two args constructor called" << endl;
    }

    Player(string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
        cout << "three args constructor called" << endl;
    }

    void display()
    {
        cout << "Name : " << name << " , Health : " << health << " , xp : " << xp << endl;
    }
};

int main()
{
    Player p1;
    Player p2("Krishna");
    Player p3("Krish", 200);
    Player p4("Kanha", 300, 4);

    p1.display();
    p2.display();
    p3.display();
    p4.display();

    return 0;
}