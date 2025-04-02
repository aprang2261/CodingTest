#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N;
	int total = 0;
	char M[101];

	// 더할 숫자 개수
	scanf("%d", &N);

	// 숫자들 입력
	scanf("%s", &M);

	for (int i = 0; i < N; i++) {
		total = total + (int)M[i] - 48;
	}

	printf("%d", total);
}