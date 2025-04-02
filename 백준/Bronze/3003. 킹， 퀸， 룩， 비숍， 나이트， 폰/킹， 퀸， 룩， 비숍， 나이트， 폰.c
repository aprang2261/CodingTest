#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	int findChess[6] = { 0, };

	for (int i = 0; i < 6; i++) {
		scanf("%d", &findChess[i]);
		chess[i] = chess[i] - findChess[i];
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", chess[i]);
	}
}