#include <iostream>
#include <string>
using namespace std;

// Shallow Copying in copy constructor
class Shallow
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }

    // constructor
    Shallow(int d);

    // copy constructor (shallow copy)
    Shallow(const Shallow &source);

    // destructor
    ~Shallow();
};

// defining constructor
Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

// defining copy constructor
Shallow::Shallow(const Shallow &source)
    : data(source.data)
{
    cout << "Copy constructor - shallow copy" << endl;
}

// ✅ fixed destructor
Shallow::~Shallow()
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s)
{
    cout << s.get_data_value() << endl;
}

int main()
{

    Shallow obj1{100};
    display_shallow(obj1);

    Shallow obj2{obj1};
    obj2.set_data_value(1000);

    return 0;
}
