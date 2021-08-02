/* Solutions\Diagonal-Difference\src\main.cpp
 * Calculates the difference between the
 * sums of two diagonals within a 2D matrix.
 *
 * (c) 2020-2021 Jordan sola
 * Written by Jordan Sola
 */

#include <iostream>
#include <vector>
#include <cmath>

using std::abs;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int height = 0;
    cin >> height;

    const int x = height;
    const int y = height;

    vector<vector<int> > container;

    for (int i = 0; i < y; i++)
    {
        vector<int> row;
        for (int j = 0; j < x; j++)
        {
            int hold = 0;
            cin >> hold;
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

    cout << abs(absolute_difference) << endl;

    return 0;
}