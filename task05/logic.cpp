#include <iostream>
using namespace std;

void find_last_local_minimum_tr(int& x, int& y, int** matrix, int n, int m) {
	x = 0;
	y = 0;

	//if (matrix[0][0] < matrix[0][1] && matrix[0][0] < matrix[1][0]);

	for (int i = 1; i < m - 1; i++) //upper border
	{
		if (matrix[0][i] < matrix[0][i - 1] && matrix[0][i] < matrix[0][i + 1]) {
			x = i;
		}
	}

	if (matrix[0][m] < matrix[0][m - 1] && matrix[0][m] < matrix[1][m]) {
		x = m;
	}

	for (int i = 1; i < n - 1; i++) // left border
	{
		if (matrix[i][0] < matrix[i - 1][0] && matrix[i][0] < matrix[i + 1][0]) {
			y = i;
		}
	}

	//if (matrix[n][0] < matrix[n][1] && matrix[n][0] < matrix[n-1][0]) {
	//	y = n;
	//}

	for (int i = 0; i < n; i++) // field
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < matrix[i][j - 1] && matrix[i][j] < matrix[i][j + 1]
				&& matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i - 1][j]) {
				x = j;
				y = i;
			}
		}
	}

	//for (int i = 1; i < m - 1; i++) // right border
	//{
	//	if (matrix[m][i] < matrix[m][i - 1] && matrix[m][i] < matrix[m][i + 1]) {
	//		x = m;
	//		y = i;
	//	}
	//}

	//if (matrix[n][m] < matrix[n][m - 1] && matrix[n][m] < matrix[n - 1][m]) {
	//	x = m;
	//	y = n;
	//}

	//for (int i = 1; i < m - 1; i++) //bottom border
	//{
	//	if (matrix[n][i] < matrix[n][i - 1] && matrix[n][i] < matrix[n][i + 1]) {
	//		x = i;
	//		y = n;
	//	}
	//}



}

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

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (is_local_minimum(matrix, i, j, n, m)) {
				x = i+1;
				y = j+1; 
			}
		}
	}
}