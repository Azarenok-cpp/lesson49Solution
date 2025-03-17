#include "logic.h"

double get_avg_of_non_null_elements(int** matrix, int n, int m) {
	if (n <= 0 || m <= 0) {
		return -1;
	}

	double sum = 0;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] != 0) {
				sum += matrix[i][j];
				counter++;
			}
		}
	}

	return counter > 0 ? sum / counter : 0;
}