#include "logic.h"

int find_min_line_index(int** matrix, int i, int m) {

	int min_index = 0;

	for (int j = 1; j < m; j++) {

		if (matrix[i][j] < matrix[i][min_index]) {
			min_index = j;
		}
	}

	return min_index;
}

int find_max_column_index(int** matrix, int j, int n) {

	int max_index = 0;

	for (int i = 1; i < n; i++) {

		if (matrix[i][j] > matrix[max_index][j]) {
			max_index = i;
		}
	}

	return max_index;
}

int count_saddle_elements(int** matrix, int n, int m) {

	int c = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (matrix[find_min_line_index(matrix, i, m)][j]
				== matrix[i][find_max_column_index(matrix, j, n)]) {

				c++;
			}
		}
	}

	return c;
}