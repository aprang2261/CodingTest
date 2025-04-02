#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int matrix[9][9];
	int max = 0;
	int index[2];
	int find = -1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max <= matrix[i][j]) {
				max = matrix[i][j];
				index[0] = i + 1;
				index[1] = j + 1;
			}
		}
	}

	printf("%d\n%d %d", max, index[0], index[1]);
}