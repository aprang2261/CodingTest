#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N;
	float avg;
	float M = 0, total = 0;
	int score[1001] = { 0, };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);

		if (score[i] > M) {
			M = score[i];
		}
	}

	for (int i = 0; i < N; i++) {
		total = total + score[i];
	}

	avg = ((total / M) * 100) / N;
	printf("%0.2f", avg);
}