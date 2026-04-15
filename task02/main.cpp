#include "util.h"

int main() {
	//int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n = 4;
	//
	//cout << "Enter size of square matrix: ";
	//cin >> n >> m;
	//
	//init(matrix, n, m, 1, 10);

	int matrix[][DEFAULT_SIZE]{ {0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{1,1,1,1}};

	cout << "\n\n\nMatrix:\n" << convert(matrix, n, n);

	int row_index = find_row_index_with_extreme_sum(matrix, n);

	cout << "\nExtreme row is \n" << row_index + 1;

	return 0;
}