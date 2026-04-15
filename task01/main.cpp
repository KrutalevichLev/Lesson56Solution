#include "util.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n, m;

	cout << "Enter size of matrix: ";
	cin >> n >> m;

	init(matrix, n, m, 1, 10);

	cout << "\n\n\nMatrix:\n" << convert(matrix, n, m);

	return 0;
}