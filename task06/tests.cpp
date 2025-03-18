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

	int expected = 5;
	int actual = find_minimum_of_local_maxima(matrix, n, m);

	print(expected == actual, to_string(actual));

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
		{3,2,4},
		{1,3,7}
	};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}

	int expected = 3;
	int actual = find_minimum_of_local_maxima(matrix, n, m);

	print(expected == actual, to_string(actual));

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
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

	int expected = -1;
	int actual = find_minimum_of_local_maxima(matrix, n, m);

	print(expected == actual, to_string(actual));

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

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

	int expected = 5;
	int actual = find_minimum_of_local_maxima(matrix, n, m);

	print(expected == actual, to_string(actual));

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}


