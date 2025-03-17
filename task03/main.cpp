#include "logic.h"
#include "util.h"

int main() {
	srand(time(0));

	int N;
	int** matrix;

	cout << "N: ";
	cin >> N;

	matrix = new int*[N];

	for (int i = 0; i < N; i++)
	{
		matrix[i] = new int[N];
	}

	init(matrix, N, N);
	print_matrix(matrix, N, N);

	cout <<"Sum of elements on two diagonals: "<< (sum_elements_on_main_diagonal(matrix, N) + sum_elements_on_other_diagonal(matrix, N));

	delete_matrix(matrix, N);
	return 0;
}