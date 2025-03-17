#include "logic.h"
#include "util.h"

int main() {
	srand(time(0));

	int N, M;
	int** matrix;

	cout << "N M: ";
	cin >> N >> M;

	matrix = new int*[N];

	for (int i = 0; i < N; i++)
	{
		matrix[i] = new int[M];
	}

	init(matrix, N, M);
	print_matrix(matrix, N, M);

	cout << "AVG: " << get_avg_of_non_null_elements(matrix, N, M);

	delete_matrix(matrix, N);
	return 0;
}