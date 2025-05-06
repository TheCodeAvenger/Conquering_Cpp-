// Constructor Initialization List

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
    // constructor initializing list
    Player()
        : name{"None"}, health{0}, xp{0}
    {
        cout << "No args constructor called !" << endl;
    }

    Player(string name_val)
        : name{name_val}, health{0}, xp{0}
    {
        cout << "one args constructor called !" << endl;
    }

    Player(string name_val, int health_val)
        : name{name_val}, health{health_val}, xp{0}
    {
        cout << "Two args constructor called !" << endl;
    }

    Player(string name_val, int health_val, int xp_val)
        : name{name_val}, health{health_val}, xp{xp_val}
    {
        cout << "three args constructor called !" << endl;
    }

    void display()
    {
        cout << "Name: " << name << " , health: " << health << " , xp: " << xp << endl;
    }
};

// Question 1

// Challenge 1: Student Class
// Variables: name, roll_no, and const int max_marks = 100

// Use initialization list to initialize all

// Create and display the student details

class Student
{
private:
    string name;
    int roll_no;
    const int max_marks;

public:
    // defining constructors

    Student(string name_val, int roll_no_val) : name{name_val}, roll_no{roll_no_val}, max_marks{100}
    {
        // body of constructor
    }

    void display()
    {
        cout << "Name: " << name << ", Roll No: " << roll_no << ", Max Marks: " << max_marks << endl;
    }
};

int main()
{
    Player empty;
    Player krishna("Krishna");
    Player villain("Villain", 100, 50);

    empty.display();
    krishna.display();
    villain.display();

    cout << "<------------question 1------------------->" << endl;

    Student s1("Krishna", 10);
    s1.display();
    return 0;
}