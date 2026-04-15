#include "util.h"

void init(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m, int a, int b) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % (b - a + 1) + a;
		}
	}
}


string convert(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	string msg = "";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			msg += to_string(matrix[i][j]) + "\t";
		}
		msg += "\n";
	}

	return msg;
}