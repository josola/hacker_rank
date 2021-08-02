/* solutions/diagonal_difference/src/main.cpp
 * Diagonal Difference.
 * (c) Jordan Sola 2021
 * Written by Jordan Sola 2021 */

#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int height = 0;
    std::cin >> height;

    const int x = height;
    const int y = height;

    std::vector<std::vector<int> > container;

    for (int i = 0; i < y; i++)
    {
        std::vector<int> row;
        for (int j = 0; j < x; j++)
        {
            int hold = 0;
            std::cin >> hold;
            row.push_back(hold);
        }
        container.push_back(row);
    }

    // Calculate the sum of first diagonal.

    int diagonal_a_sum = 0;

    for (int i = 0; i < x; i++)
    {
        diagonal_a_sum += container[i][i];
    }

    // Calculate the sum of the second diagonal.

    int diagonal_b_sum = 0;

    int hold = x - 1;
    for (int i = 0; i < x; i++)
    {
        diagonal_b_sum += container[hold][i];
        hold--;
    }

    // Finishing things up.

    int absolute_difference = diagonal_a_sum - diagonal_b_sum;

    std::cout << abs(absolute_difference) << std::endl;

    return 0;
}