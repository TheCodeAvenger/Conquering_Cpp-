#include <iostream>
using namespace std;

class Move
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }

    // declaring in class
    Move(int d); // constructor

    Move(const Move &source); // copy constructor

    // Move(Move &&source); // Move constructor

    ~Move(); // Destructor
};

// constructor
Move::Move(int d)
{
    data = new int;
    *data = d;
    
    cout << "Constructor for :" << d << endl;
}

// copy constructor
Move::Move(const Move &source)
    : data{*source.data}
{
    cout << "Copy constructor-deep copy for : " << *data << endl;
}

// move constructor
// Move::Move(Move &&source) noexcept
//     : data(source.data)
// {
//     source.data = nullptr;
//     cout << "Move constructor - moving resource"<<*data<<endl;
// }

// destructor

int main()
{
   // your code here
    return 0;
}