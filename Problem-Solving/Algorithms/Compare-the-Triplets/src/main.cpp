/*
* Compare the elements of two size 3 arrays and print the number
* of higher values between the arrays when compared to each other.
* Jordan Sola 2020 - MIT License
*/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main()
{
    vector<int> triplet_a;

    for (int i = 0; i < 3; i++)
    {
        int hold = 0;
        cin >> hold;
        triplet_a.push_back(hold);
    }

    vector<int> triplet_b;

    for (int i = 0; i < 3; i++)
    {
        int hold = 0;
        cin >> hold;
        triplet_b.push_back(hold);
    }

    int score_a = 0;
    int score_b = 0;

    for (int i = 0; i < 3; i++)
    {
        if (triplet_a[i] > triplet_b[i])
        {
            score_a++;
        }
        else if (triplet_b[i] > triplet_a[i])
        {
            score_b++;
        }
    }

    cout << score_a << ' ' << score_b << '\n';

    return 0;
}
