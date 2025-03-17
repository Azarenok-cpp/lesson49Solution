#include "logic.h"

int sum_elements_on_main_diagonal(int** matrix, int N) {
	if (N <= 0) {
		return 0;
	}

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][i];
	}
	return sum;
}

int sum_elements_on_other_diagonal(int** matrix, int N) {
	if (N <= 0) {
		return 0;
	}

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][N-i-1];
	}

	return sum;
}