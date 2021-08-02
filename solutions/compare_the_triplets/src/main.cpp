/* solutions/compare_the_triplets/src/main.cpp
 * Compare the triplets.
 * (c) Jordan Sola 2021
 * Written by Jordan Sola 2021 */

#include <iostream>
#include <vector>

int main()
{
    // Set up triplets.

    std::vector<int> triplet_a;

    for (int i = 0; i < 3; i++)
    {
        int hold = 0;
        std::cin >> hold;
        triplet_a.push_back(hold);
    }

    std::vector<int> triplet_b;

    for (int i = 0; i < 3; i++)
    {
        int hold = 0;
        std::cin >> hold;
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

    std::cout << score_a << ' ' << score_b << std::endl;

    return 0;
}