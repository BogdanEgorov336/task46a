#include "logic.h"

int get_min_in_line(int** matrix, int i, int m) {

	int min = matrix[i][0];

	for (int j = 1; j < m; j++) {
		if (matrix[i][j] < min) {
			
			min = matrix[i][j];
		}
	}

	return min;
}