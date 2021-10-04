/*
 * Hacker Rank - Diagonal difference
 * (c) 2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include <vector>
#include <cmath>

#include "stdio.h"

int main() {

	int height = 0;
	scanf("%i", &height);

	const int x = height;
	const int y = height;

	std::vector<std::vector<int> > container;

	for (int i = 0; i < y; i++) {

		std::vector<int> row;
		for (int j = 0; j < x; j++) {
			int hold = 0;
			scanf("%i", &hold);
			row.push_back(hold);
		}

		container.push_back(row);
	}

	// Calculate the sum of first diagonal.
	int diagonal_a_sum = 0;
	for (int i = 0; i < x; i++)
		diagonal_a_sum += container[i][i];

	// Calculate the sum of the second diagonal.
	int diagonal_b_sum = 0;
	int hold = x - 1;
	for (int i = 0; i < x; i++) {
		diagonal_b_sum += container[hold][i];
		hold--;
	}

	int absolute_difference = diagonal_a_sum - diagonal_b_sum;

	printf("%i\n", abs(absolute_difference));

	return 0;
}