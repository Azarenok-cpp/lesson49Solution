#include <iostream>
using namespace std;

void find_extreme_columns(int& max_col, int& min_col, int n, int m, int** matrix) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] > matrix[i][max_col]) {
				max_col = j;
			}
			else if (matrix[i][j] < matrix[i][min_col]) {
				min_col = j;
			}
		}
	}
	cout << "Max: " << max_col << "; min: " << min_col<<endl;
}

int find_sum_of_elements_in_columns_with_extremes(int** matrix, int n, int m) {
	if (n <= 1 || m <= 1) {
		return -1;
	}

	int max_col = 0;
	int min_col = 0;

	find_extreme_columns(max_col, min_col, n, m, matrix);

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][max_col];
		sum += matrix[i][min_col];

	}

	return sum;
}