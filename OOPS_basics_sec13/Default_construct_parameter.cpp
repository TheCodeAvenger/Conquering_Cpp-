// Default Constructor Parameters

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
//     // default constructor parameters

//     void display()
//     {
//         cout << "Name : " << name << " , Health : " << health << " , xp : " << xp << endl;
//     }
//     Player(string name_val = "None", int health_val = 0, int xp_val = 0);
// };

// Player::Player(string name_val, int health_val, int xp_val)
//     : name{name_val}, health{health_val}, xp{xp_val}
// {
//     cout << "Three-args constructor " << endl;
// }

// int main()
// {
//     Player empty;
//     Player krishna{"Krishna"};
//     Player krish{"Krish", 100};
//     Player kanha{"Kanha", 100, 50};

//     empty.display();
//     krishna.display();
//     krish.display();
//     kanha.display();
//     return 0;
// }

// question 1
#include <iostream>
#include <string>
using namespace std;

// Q1. Create a class Book with:
// title (default: "Unknown")

// author (default: "Anonymous")

// pages (default: 100)

// And print all details using a method display().

class Book
{

private:
    string title;
    string author;
    int pages;

public:
    Book(string title_val = "None", string author_val = "anonymous", int pages_val = 100)
        : title{title_val}, author{author_val}, pages{pages_val}
    {
        cout << "  3 args constructor called" << endl;
    }

    void display()
    {
        cout << "Title : " << title << " , author : " << author << " , pages : " << pages << endl;
    }
};

// Q3. Add a constructor to this Car class with default values and print speed and color:
class Car
{
private:
    int speed;
    string color;

public:
    Car(int speed_val = 40, string color_val = "Blue")
        : speed{speed_val}, color{color_val}
    {
        cout << "2 args constructor called !" << endl;
    };

    void display()
    {
        cout << "Speed : " << speed << " , Color : " << color << endl;
    }
};

int main()
{
    cout << "<------------------example 1------------------>" << endl;
    Book b1("meditations");
    b1.display();

    cout << "<------------------example 2------------------>" << endl;

    Car c1;
    Car c2(80, "black");

    c1.display();
    c2.display();
    return 0;
}