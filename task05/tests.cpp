#include "tests.h"
#include "logic.h"
void print(bool result, string logic) {
	cout << (result ? "Success!\n\n\n" : "\033[1;31m Fail! \033[0m Program output: " + logic + "\n\n\n");
}

void test01() {
	const int n = 3;
	const int m = 3;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int values[n][m] = {
		{5,7,6},
		{9,3,8},
		{4,5,2}
	};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = values[i][j];
		}
	}

	int expected_x = 3;
	int expected_y = 3;

	int actual_x = 0;
	int actual_y = 0;

	find_last_local_minimum(actual_x, actual_y, matrix, n, m);

	print((actual_x == expected_x && actual_y == expected_y), to_string(actual_x) + " "
		+ to_string(actual_y));

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

void test02() {
	const int n = 2;
	const int m = 3;

	int** matrix;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{5,2,4},
		{1,3,7}
	};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}

	int expected_x = 2;
	int expected_y = 1;

	int actual_x = 0;
	int actual_y = 0;

	find_last_local_minimum(actual_x, actual_y, matrix, n, m);

	print((actual_x == expected_x && actual_y == expected_y), to_string(actual_x) + " "
		+ to_string(actual_y));

}

void test03() {
	const int n = 2;
	const int m = 2;

	int** matrix;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{1,1},
		{1,1}
	};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}

	int expected_x = -1;
	int expected_y = -1;

	int actual_x = 0;
	int actual_y = 0;

	find_last_local_minimum(actual_x, actual_y, matrix, n, m);

	print((actual_x == expected_x && actual_y == expected_y), to_string(actual_x) + " "
		+ to_string(actual_y));

}

void test04() {
	const int n = 3;
	const int m = 3;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{5, 7, 6},
		{9, 3, 8},
		{4, 5, 2}
	};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = values[i][j];
		}
	}

	int expected_x = 3;
	int expected_y = 3;

	int actual_x = 0;
	int actual_y = 0;

	find_last_local_minimum(actual_x, actual_y, matrix, n, m);

	print((actual_x == expected_x && actual_y == expected_y), to_string(actual_x) + " "
		+ to_string(actual_y));

	for (int i = 0; i < n; i++) delete[] matrix[i];
	delete[] matrix;
}


void test05() {
	const int n = 2;
	const int m = 2;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{1, 1},
		{1, 1}
	};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = values[i][j];
		}
	}

	int expected_x = -1; 
	int expected_y = -1;

	int actual_x = 0;
	int actual_y = 0;

	find_last_local_minimum(actual_x, actual_y, matrix, n, m);

	print((actual_x == expected_x && actual_y == expected_y), to_string(actual_x) + " "
		+ to_string(actual_y));

	for (int i = 0; i < n; i++) delete[] matrix[i];
	delete[] matrix;
}


void test06() {
	const int n = 4;
	const int m = 4;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{10, 12, 15, 16},
		{9, 6, 12, 14},
		{8, 7, 6, 13},
		{11, 15, 4, 17}
	};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = values[i][j];
		}
	}

	int expected_x = 4; 
	int expected_y = 3;

	int actual_x = 0;
	int actual_y = 0;

	find_last_local_minimum(actual_x, actual_y, matrix, n, m);

	print((actual_x == expected_x && actual_y == expected_y), to_string(actual_x) + " "
		+ to_string(actual_y));

	for (int i = 0; i < n; i++) delete[] matrix[i];
	delete[] matrix;
}
