#include "logic.h"

bool is_local_maximum(int** matrix, int x, int y, int n, int m) {
	int value = matrix[x][y];

	if (x > 0 && matrix[x - 1][y] >= value) {
		return false;
	}
	if (x < n - 1 && matrix[x + 1][y] >= value) {
		return false;
	}
	if (y > 0 && matrix[x][y - 1] >= value) {
		return false;
	}
	if (y < m - 1 && matrix[x][y + 1] >= value) {
		return false;
	}

	return true;
}

int find_minimum_of_local_maxima(int** matrix, int n, int m) {
	int min_local_maximum = matrix[0][0];

	bool flag = false; 

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (is_local_maximum(matrix, i, j, n, m)) {
				flag = true; 
				min_local_maximum = min(min_local_maximum, matrix[i][j]);
			}
		}
	}

	if (!flag) {
		return -1; 
	}

	return min_local_maximum;
}