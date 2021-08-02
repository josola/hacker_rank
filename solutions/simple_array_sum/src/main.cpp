/* fsolutions/simple_array_sum/src/main.cpp
 * Simple array sum.
 * (c) Jordan Sola 2021
 * Written by Jordan Sola 2021 */

#include <iostream>
#include <vector>
#include <numeric>

int main()
{
	// Get numbers into array.

	unsigned long int size = 0;

	std::cin >> size;

	std::vector<int> container;

	for (int i = 0; i < size; i++)
	{
		int num = 0;
		std::cin >> num;
		container.push_back(num);
	}

	// Get array sum.

	int sum = accumulate(container.begin(), container.end(), 0);

	// Finishing things up.

	std::cout << sum << std::endl;

	return 0;
}