/* Solutions\Compare-the-Triplets\src\main.cpp
 * Compare the elements of two size 3 arrays and print the number
 * of higher values between the arrays when compared to each other.
 * 
 * (c) 2020-2021 Jordan Sola
 * Written by Jordan Sola
 */

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    // Set up triplets.

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

    // Determine scores.

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

    // Finishing things up.

    cout << score_a << ' ' << score_b << endl;

    return 0;
}
