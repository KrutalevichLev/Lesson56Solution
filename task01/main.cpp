#include "util.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n, m;

	cout << "Enter size of square matrix: ";
	cin >> n >> m;

	init(matrix, n, m, 1, 10);

	cout << "\n\n\nMatrix:\n" << convert(matrix, n, m);

	int sum = sum_main_elements(matrix, n);

	cout << "\nSum of main elements:\n" << sum;

	sum = sum_additional_elements(matrix, n);

	cout << "\nSum of additional elements:\n" << sum;

	sum = sum_inside_elements(matrix, n);

	cout << "\nSum of inside elements:\n" << sum;

	sum = sum_external_elements(matrix, n);

	cout << "\nSum of external elements:\n" << sum;



	return 0;
}