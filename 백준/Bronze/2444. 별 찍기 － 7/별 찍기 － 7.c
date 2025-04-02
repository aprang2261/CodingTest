#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N = 0;

	scanf("%d", &N);

	int temp = N;


	while (N != 1) {
		for (int i = 0; i < N - 1; i++) {
			printf(" ");
		}
		for (int i = 1; i < (temp - N + 1) * 2; i++) {
			printf("*");
		}
		printf("\n");
		N--;
	}

	while (N != temp + 1) {
		for (int i = 0; i < N - 1; i++) {
			printf(" ");
		}
		for (int i = 1; i < (temp - N + 1) * 2; i++) {
			printf("*");
		}
		printf("\n");
		N++;
	}
}