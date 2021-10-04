/*
 * Hacker Rank - Compare the Triplets
 * (c) 2021 Jordan Sola. All rights reserved. (MIT License)
 * Written by Jordan Sola 2021
 */

#include <vector>

#include "stdio.h"

int main() {

	std::vector<int> triplet_a;
	for (int i = 0; i < 3; i++) {

		int hold = 0;
		scanf("%d", &hold);

		triplet_a.push_back(hold);
	}

	std::vector<int> triplet_b;
	for (int i = 0; i < 3; i++) {

		int hold = 0;
		scanf("%d", &hold);

		triplet_b.push_back(hold);
	}


	// Determine scores
	int score_a = 0;
	int score_b = 0;

	for (int i = 0; i < 3; i++) {

		// Triplet A gains a point
		if (triplet_a[i] > triplet_b[i])
			score_a++;

		// Triplet B gains a point
		else if (triplet_b[i] > triplet_a[i])
			score_b++;
	}

	printf("%i %i\n", score_a, score_b);

	return 0;
}