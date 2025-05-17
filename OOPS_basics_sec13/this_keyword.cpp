#include <iostream>
using namespace std;

class Person{

    private:
    int age;

    public:
    void set_age(int age){
       this->age= age;
    }

    void show(){
        cout<<"age is :"<<age<<endl;
    }
};

int main() {
    Person p1;
    p1.set_age(10);
    p1.show();
    return 0;
}