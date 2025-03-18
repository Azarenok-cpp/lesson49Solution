#include <iostream>
using namespace std;

bool is_local_minimum(int** matrix, int x, int y, int n, int m) {
	int value = matrix[x][y];

	if (x > 0 && matrix[x - 1][y] <= value) {
		return false;
	}
	if (x < n - 1 && matrix[x + 1][y] <= value) {
		return false;
	}
	if (y > 0 && matrix[x][y - 1] <= value) {
		return false;
	}
	if (y < m - 1 && matrix[x][y + 1] <= value) {
		return false;
	}

	return true;
}

void find_last_local_minimum(int& x, int& y, int** matrix, int n, int m) {
	x = -1;
	y = -1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (is_local_minimum(matrix, i, j, n, m)) {
				x = i+1;
				y = j+1; 
			}
		}
	}
}