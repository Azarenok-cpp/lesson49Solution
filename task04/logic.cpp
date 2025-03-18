#include "logic.h"

void find_extreme_columns(int& max_col, int& min_col, int n, int m, int** matrix) {
	max_col = 0;
	min_col = 0;

	for (int j = 0; j < m; j++) {
		int column_max = matrix[0][j];
		int column_min = matrix[0][j];

		for (int i = 1; i < n; i++) {
			if (matrix[i][j] > column_max) {
				column_max = matrix[i][j];
			}
			if (matrix[i][j] < column_min) {
				column_min = matrix[i][j];
			}
		}

		if (column_max > matrix[0][max_col]) {
			max_col = j;
		}

		if (column_min <= matrix[0][min_col]) {
			min_col = j;
		}
	}
}



int find_sum_of_elements_in_columns_with_extremes(int** matrix, int n, int m) {
	if (n <= 1 || m <= 1) {
		return -1;
	}

	int max_col = 0;
	int min_col = 0;

	find_extreme_columns(max_col, min_col, n, m, matrix);

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += matrix[i][max_col];
		sum += matrix[i][min_col];

	}

	return sum;
}
