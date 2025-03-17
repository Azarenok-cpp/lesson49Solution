#include "logic.h"

int get_amount_of_rows_with_most_positive_elements(int** matrix, int n, int m) {
	if (n <= 0 || m <= 0) {
		return -1;
	}
	int counter = 0;

	for (int i = 0; i < n; i++)
	{
		int count_positives = 0;

		for (int j = 0; j < m; j++) {
			if (matrix[i][j] > 0) {
				count_positives++;
			}
		}

		if (count_positives > n -count_positives) {
			counter++;
		}

	}
	return counter;

}