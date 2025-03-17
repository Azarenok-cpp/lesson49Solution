#include "tests.h"
#include "logic.h"
void print(bool result) {
	cout << (result ? "Success!\n" : "Fail.\n");
}

void test01() {
	const int n = 2;
	const int m = 2;

	int** matrix;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{1,2},
		{2,1}
	};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}

	int expected = 6;
	int actual = find_sum_of_elements_in_columns_with_extremes(matrix, n, m);
	print(expected == actual);
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
		{1,2,2},
		{3,1,2}
	};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}

	int expected = 7;
	int actual = find_sum_of_elements_in_columns_with_extremes(matrix, n, m);
	print(expected == actual);
}

void test03() {
	const int n = 3;
	const int m = 4;

	int** matrix;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{-1,-2,2,2},
		{2,-1,1,7},
		{1,2,3,1}
	};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}

	int expected = 9;
	int actual = find_sum_of_elements_in_columns_with_extremes(matrix, n, m);
	print(expected == actual);
}

void test04() {
	const int n = 1;
	const int m = 1;

	int** matrix;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	/*int values[n][m]{
		{1,2},
		{2,1}
	};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}*/

	int expected = -1;
	int actual = find_sum_of_elements_in_columns_with_extremes(matrix, n, m);
	print(expected == actual);
}

void test05() {
	const int n = 3;
	const int m = 3;

	int** matrix;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{1,1,1},
		{1,1,1},
		{1,1,1}
	};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}

	int expected = 9; //???
	int actual = find_sum_of_elements_in_columns_with_extremes(matrix, n, m);
	print(expected == actual);
}

void test06() {
	const int n = 0;
	const int m = 0;

	int** matrix;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	/*int values[n][m]{
		{1,2},
		{2,1}
	};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}*/

	int expected = -1;
	int actual = find_sum_of_elements_in_columns_with_extremes(matrix, n, m);
	print(expected == actual);
}

void test07() {
	const int n = -1;
	const int m = -1;

	int** matrix = new int* [-n];

	/*matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}*/

	/*int values[n][m]{
		{1,2},
		{2,1}
	};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}*/

	int expected = -1;
	int actual = find_sum_of_elements_in_columns_with_extremes(matrix, n, m);
	print(expected == actual);
}

void test08() {
	const int n = 3;
	const int m = 4;

	int** matrix;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	int values[n][m]{
		{0,2,4,3},
		{2,1,2,0},
		{6,1,-2,0},
	};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = values[i][j];
		}
	}

	int expected = 12;
	int actual = find_sum_of_elements_in_columns_with_extremes(matrix, n, m);
	print(expected == actual);
}
