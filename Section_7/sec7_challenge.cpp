#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vector_1;

    vector_1.push_back(10);
    vector_1.push_back(20);

    cout << "first element of vector 1 :" << vector_1.at(0) << endl;
    cout << "second element of vector 1 :" << vector_1.at(1) << endl;
    cout << "size of vector 1 :" << vector_1.size() << endl;

    vector<int> vector_2;

    vector_2.push_back(100);
    vector_2.push_back(200);

    cout << "first element of vector 2 :" << vector_2.at(0) << endl;
    cout << "second element of vector 2 :" << vector_2.at(1) << endl;
    cout << "size of vector 2 :" << vector_2.size() << endl;

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    vector_1.at(0) = 1000;

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << vector_1.at(0) << endl;
    cout << vector_1.at(1) << endl;
    return 0;
}