#include "util.h"

int main() {

	int n, m;
	cout << "Enter size of the matrix [n, m]: ";
	cin >> n >> m;

	int a, b;
	cout << "Enter range of values generated: ";
	cin >> a >> b;

	int** matrix = new int*[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	init(matrix, n, m, a, b);
	cout << "Matrix:\n" << convert_to_string(matrix, n, m);



	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	system("pause");
	return 0;
}