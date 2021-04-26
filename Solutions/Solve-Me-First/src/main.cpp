/* Solutions\Solve-Me-First\src\main.cpp
 * Complete the function to return the sum of two integers.
 *
 * (c) 202-2021 Jordan Sola
 * Written by Jordan Sola
 */

#include <iostream>

using std::cin;
using std::cout;

int SolveMeFirst(int a, int b);

int main()
{
	bool program_running = true;
	while (program_running)
	{
		cout << "Welcome\n"
			 << '\n'
			 << "This program takes two integers as input\n"
			 << "and adds them together, then prints the result.\n"
			 << '\n'
			 << "Would you like to continue?\n"
			 << "1 - Yes, continue.\n"
			 << "0 - No, exit program.\n"
			 << '\n'
			 << "Please enter your selection:\n";

		bool selection;
		cin >> selection;

		if (selection)
		{
			if (cin.fail())
			{
				cin.clear();
			}
			cout << '\n';
		}
		else
		{
			program_running = false;
			cout << "You have chosen to exit this program. Goodbye.\n";
			return 0;
		}

		cout << "Please enter the two numbers you would like to add.\n"
			<< '\n'
			<< "Input:\n"
			<< '\n';

		int num_a = 0, num_b = 0;

		cin >> num_a >> num_b;

		cout << '\n';

		int sum = 0;

		sum = SolveMeFirst(num_a, num_b);

		cout << "The sum of your two numbers.\n"
			<< '\n'
			<< "Sum = " << sum << '\n'
			<< '\n'
			<< "Would you like to calculate another pair of integers?\n"
			<< "1 - Yes, again.\n"
			<< "0 - No, exit program.\n"
			<< '\n'
			<< "Please enter your selection.\n";

		cin >> selection;

		if (selection)
		{
			if (cin.fail())
			{
				cin.clear();
			}
			program_running = true;
			cout << '\n';
		}
		else
		{
			program_running = false;
			cout << "You have chosen to exit this program. Goodbye.\n";
			return 0;
		}
	}

	return 0;
}

int SolveMeFirst(int a, int b)
{
	return a + b;
}