#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char S[101];

	scanf("%s", &S);

	for (int i = 0; i < strlen(S)/2; i++) {
		if (S[i] != S[strlen(S) - i - 1]) {
			printf("0");
			return 0;
		}
	}
	printf("1");
}