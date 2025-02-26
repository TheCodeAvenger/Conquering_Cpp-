#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // // declaring vectors

    // // vector <int> test_scores (5) ;
    // // vector <char> vowels (5);

    // // initializing
    // vector<int> test_scores{100, 95, 90, 85, 80};

    // vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    // vector<double> high_tempearture(365, 80.0);

    // //  accessing vectors :

    // //    array syntax
    // cout << " test score at index 0 :" << test_scores[0] << endl;

    // //    vector syntax
    // cout << " test score at index 1 :" << test_scores.at(1) << endl;

    // // changing vector content

    // cin >> test_scores.at(0);
    // cin >> test_scores.at(1);
    // cin >> test_scores.at(2);
    // cin >> test_scores.at(3);
    // cin >> test_scores.at(4);

    // cout << "score at index 0 :" << test_scores.at(0) << endl;

    // test_scores.at(1) = 2; // assignment
    // cout << "score at index 1 :" << test_scores.at(1) << endl;

    // // to add element at the end of vector

    // test_scores.push_back(50);
    // cout << "score at index 5 :" << test_scores.at(5) << endl;
    // test_scores.push_back(55);
    // cout << "score at index 6 :" << test_scores.at(6) << endl;
    // cout << "size of vector :" << test_scores.size() << endl;

    // // enter a test score to add to vector
    // cout << "enter a test score to add to vector";
    // int new_score{0};
    // cin >> new_score;

    // test_scores.push_back(new_score);

    // example of 2-dimensional vector

    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}};

    cout << "\n here are movie ratings for receiver #1 using array syntax" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\n here are movie ratings for receiver #1 using vector syntax" << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;

    // if you want to manipulatr values :
    // cin >> movie_ratings.at(0).at(0);
    // cin >> movie_ratings.at(0).at(1);
    // cin >> movie_ratings.at(0).at(2);
    // cin >> movie_ratings.at(0).at(3);

    return 0;
}