#include <iostream>

using namespace std;

int main()
{

    // int test_score[5]{1, 2, 3, 4, 5};
    // cout << "test scores is : " << test_score[1] << endl;

    // cin >> test_score[5];

    // example
    int hi_scores[]{90, 80, 70, 60, 50};

    cout << "the first high score is :" << hi_scores[0] << endl;

    hi_scores[0] = 95;
    cout << "the first high score is now :" << hi_scores[0] << endl;
    return 0;
}