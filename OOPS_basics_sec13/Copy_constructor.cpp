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
    string get_name()
    {
        return name;
    }

    int get_health()
    {
        return health;
    }

    int get_xp()
    {
        return xp;
    }
    // constructor declared
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);

    // Destructor
    ~Player()
    {
        cout << "Destructor called for " << name << endl;
    }
    // copy constructor

    Player(const Player &source);
};

// defined constructor outside class
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "3 args constructor called !" << endl;
}

//  defined copy constructor outside class

Player::Player(const Player &source)
    : name{source.name}, health{source.health}, xp{source.xp}
{
    cout << "Copy constructor - made a copy of " << source.name << endl;
}

void display_player(Player p)
{
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "Xp: " << p.get_xp() << endl;
}

int main()
{

    Player empty{"XXXXXX", 100, 50};

    Player my_new_object{empty};
    display_player(empty);

    // Player frank{"Frank"};
    // Player krishna{"Krishna", 100};
    // Player villain{"Villain", 100, 55};

    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// // question 1

// class Book
// {
// private:
//     string title;
//     int pages;

// public:
//     Book(string t, int p) : title{t}, pages{p} {}

//     // 👉 Your task: write the copy constructor here

//     Book(const Book &source)
//         : title{source.title}, pages{source.pages}
//     {
//         cout << "Copy constructor called !" << endl;
//     }

//     void show()
//     {
//         cout << title << ", " << pages << " pages" << endl;
//     }
// };

// int main()
// {
//     Book b1("Harry Potter", 300);
//     Book b2 = b1; // Should call your copy constructor
//     b2.show();
// }
