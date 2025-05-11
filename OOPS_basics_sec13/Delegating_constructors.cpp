#include <iostream>
#include <string>
using namespace std;

// Delegating Constructors

class Player
{

private:
    string name;
    int health;
    int xp;

public:
    Player(string name_val, int health_val, int xp_val)
        : name{name_val}, health{health_val}, xp{xp_val}
    {
        cout << "three args constructor called" << endl;
        // body of constructor
    }

    Player() : Player("None", 0, 0)
    {
        cout << "No args constructor delegate !" << endl;
    }

    Player(string name_val) : Player(name_val, 0, 0)
    {
        cout << "one args constructor delegate !" << endl;
    }

    Player(string name_val, int health_val) : Player(name_val, health_val, 0)
    {
        cout << "Two args constructor delegate !" << endl;
    }

    void display()
    {
        cout << "Name : " << name << " , health : " << health << " , xp :" << xp << endl;
    }
};

// Q1. Create a class Book with:
// 3 constructors:

// Default (sets title = "Untitled", price = 0)

// One-arg (sets title)

// Two-arg (sets title and price)

// Use constructor delegation to avoid repeating code

class Book
{
private:
    string title;
    double price;

public:
    // constructor

    Book(string title_val, double price_val)
        : title{title_val}, price{price_val}
    {
        cout << "Two args constructor called !" << endl;
    }

    Book() : Book("Untitled", 0.0)
    {
        cout << "zero args constructor delegated !" << endl;
    }

    Book(string title_val) : Book(title_val, 0.0)
    {
        cout << "one args constructor delegated !" << endl;
    }

    void display()
    {
        cout << "Title : " << title << " , Price : " << price << endl;
    }
};

int main()
{
    // your code here

    Player empty;
    Player krishna("Krishna");
    Player krish("Krish", 100);
    Player Kanha("Kanha", 200, 24);

    empty.display();
    krishna.display();
    krish.display();
    Kanha.display();

    cout << endl;

    cout << "-----------question 1--------------" << endl;

    Book b1;
    Book b2("Man's Search For Meaning");
    Book b3("Meditations", 200.0);

    b1.display();
    b2.display();
    b3.display();
    return 0;
}
