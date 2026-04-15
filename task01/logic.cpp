#include "logic.h"

// O(N)
int sum_main_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}

// O(N)
int sum_additional_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][n - 1 - i];
	}

	return sum;
}

int sum_inside_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;

	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}

int sum_external_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;

	for (int i = 1; i < n - 1; i++)
	{
		sum += matrix[0][i];
		sum += matrix[n - 1][i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][0];
		sum += matrix[i][n - 1];
	}


	return sum;
}