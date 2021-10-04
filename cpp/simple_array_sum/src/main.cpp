/* 
 * Hacker Rank - Simple array sum
 * (c) Jordan Sola 2021. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 * */

#include <vector>
#include <numeric>

#include "stdio.h"

int main() {

	unsigned long int size = 0;
	scanf("%i", &size);

	std::vector<int> container;
	for (int i = 0; i < size; i++) {
		int num = 0;
		scanf("%i", &num);
		container.push_back(num);
	}

	int sum = accumulate(container.begin(), container.end(), 0);

	printf("%i\n", sum);

	return 0;
}