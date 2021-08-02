/* Solutions\Simple-Array-Sum\src\main.cpp
 * Given an array of integers, find the sum of its contents.
 *
 * (c) 2020-2021 Jordan Sola
 * Written by Jordan Sola
 */

#include <iostream>
#include <vector>
#include <numeric>

using std::accumulate;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	// Get numbers into array.

	unsigned long int size = 0;

	cin >> size;

	vector<int> container;

	for (int i = 0; i < size; i++)
	{
		int num = 0;
		cin >> num;
		container.push_back(num);
	}

	// Get array sum.

	int sum = accumulate(container.begin(), container.end(), 0);

	// Finishing things up.

	cout << sum << endl;

	return 0;
}