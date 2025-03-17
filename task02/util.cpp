#include "util.h"

void init(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 10;
		}

	}
}

void print_matrix(int** matrix, int n, int m) {
	for  (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";

	}
}

void delete_matrix(int** matrix, int n) {
	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

}