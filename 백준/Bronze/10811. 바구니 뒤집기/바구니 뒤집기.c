#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int baskets[101] = { 0, };
	int N, M, i, j;

	scanf("%d %d", &N, &M);

	for (int k = 0; k < N; k++) {
		baskets[k] = k + 1;
	}

	for (int k = 0; k < M; k++) {
		scanf("%d %d", &i, &j);
		for (int l = i - 1; l < j; l++) {
			int temp = baskets[l];
			baskets[l] = baskets[j - 1];
			baskets[j - 1] = temp;
			j--;
		}
	}
	for (int k = 0; k < N; k++) {
		printf("%d ", baskets[k]);
	}
	return 0;
}