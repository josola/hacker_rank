/*
Calculates the difference between the
sums of two diagonals within a 2D matrix.
Jordan Sola 2020 - MIT License
*/

#include <iostream>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::vector;
using std::abs;

int main()
{
    // Humans need friendly interactions with computers.

    bool program_running = true;
    while (program_running)
    {
        cout << "Welcome\n"
            << '\n'
            << "This program calculates the absolute difference between\n"
            << "the sums of two diagonals within a 2D matrix.\n"
            << '\n'
            << "Would you like to continue?\n"
            << "1 - Yes, continue.\n"
            << "0 - No, exit.\n"
            << '\n'
            << "Please input your choice: ";

        bool choice;
        cin >> choice;

        if (choice)
        {
            if (cin.fail())
            {
                cin.clear();
            }
            cout << '\n';
        }
        else
        {
            cout << '\n'
                << "You have chosen to exit this program. Goodbye\n";
            return 0;
        }

        // Begin program.

        /*
        Get container input.
        To find the diagonals of a 2D matrix, the height and width must be equal.
        If you have the height of the matrix, you have the width of the matrix.
        Matrix height must be 2 or higher.
        */

        int height{};
        bool tall_enough = false;
        while (!tall_enough)
        {
            cout << "Please input the height of your matrix.\n"
                << '\n'
                << "Height = ";

            cin >> height;

            if (height >= 2)
            {
                cout << '\n';
                tall_enough = true;
            }
            else
            {
                tall_enough = false;
                cout << "The height of your matrix must be greater than, or equal to, two.\n"
                    << '\n';
            }
        }

        const int x = height;
        const int y = height;

        vector<vector<int> > container;

        cout << "Please enter the matrix input.\n"
            << '\n'
            << "Input = \n";

        for (int i = 0; i < y; i++)
        {
            vector<int> row;
            for (int j = 0; j < x; j++)
            {
                int hold;
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

        cout << '\n'
            << "The absolute difference between the diagonals of your matrix.\n"
            << '\n'
            << "Difference = "
            << abs(absolute_difference) << '\n'
            << '\n'
            << "Would you like to find another absolute difference?\n"
            << "1 - Yes, go again.\n"
            << "0 - No, exit program.\n"
            << '\n'
            << "Enter your choice: ";

        cin >> choice;

        if (choice)
        {
            cout << '\n';
            program_running = true;
        }
        else
        {
            cout << '\n'
                << "You have chosen to exit this program. Goodebye!"
                << '\n';
            program_running = false;
        }
    }
    return 0;
}