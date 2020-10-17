/*
* Given an array of integers, find the sum of its contents.
* Jordan Sola 2020 - MIT License
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using std::cin;
using std::cout;
using std::vector;
using std::accumulate;
using std::numeric_limits;
using std::streamsize;

int main()
{
	bool program_running = true;
	while (program_running)
	{
		cout << "Welcome\n"
			<< "this program calculates the sum of\n"
			<< "a given array of integers and prints\n"
			<< "the result to the screen.\n"
			<< '\n'
			<< "Would you like to continue?\n"
			<< "1 - Yes, continue.\n"
			<< "0 - No, exit program.\n"
			<< '\n'
			<< "Selection:\n";

		bool selection;
		cin >> selection;

		cout << '\n';

		if (selection)
		{
			program_running = true;
			if (cin.fail())
			{
				cin.clear();
			}
		}
		else
		{
			program_running = false;
			cout << "You have chosen to exit this program. Goodbye.\n";
			break;
		}

		unsigned long int size = 0;
		bool positive_size = false;
		while (!positive_size)
		{
			cout << "Please enter the size of the array\n"
				 << "you would like to calculate the sum of.\n"
				 << '\n'
				 << "Input:\n";
			
			cin >> size;

			cout << '\n';

			if (size <= 0)
			{
				positive_size = false;
				cout << "The size of your array must be\n"
					 << "both a positive number and larger than zero.\n";
			}
			else
			{
				positive_size = true;
			}

			cout << '\n';
		}

		cout << "Please input the numbers to be\n"
			<< "calculated within your array.\n"
			<< '\n'
			<< "Input:\n";

		vector<int> container;

		for (int i = 0; i < size; i++)
		{
			int hold = 0;
			cin >> hold;
			container.push_back(hold);
		}

		cout << '\n';

		int sum = accumulate(container.begin(), container.end(), 0);

		cout << "The sum of all elements within your input array.\n"
			 << '\n'
			 << "Sum = " << sum << '\n'
			 << '\n'
			 << "Would you like to sum the elements of another array?\n"
			 << "1 - Yes, again.\n"
			 << "0 - No, exit program.\n"
			 << '\n'
			 << "Selection: ";

		cin >> selection;

		cout << '\n';

		if (selection)
		{
			program_running = true;
			if (cin.fail())
			{
				cin.clear();
			}
		}
		else
		{
			program_running = false;
			cout << "you have chosen to exit this program. Goodbye.\n";
			break;
		}
	}

	return 0;
}