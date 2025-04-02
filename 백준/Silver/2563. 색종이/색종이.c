#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int paper[100][100] = { 0, };
	int x, y;
	int confettiCount;
	int area = 0;

	scanf("%d", &confettiCount);
	
	for (int i = 0; i < confettiCount; i++) {
		scanf("%d %d", &x, &y);

		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				paper[j][k]++;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] != 0) {
				area++;
			}
		}
	}

	printf("%d", area);
}