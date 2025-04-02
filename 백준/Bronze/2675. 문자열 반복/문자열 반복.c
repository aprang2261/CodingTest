#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char S[21];
	int T, R = 0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d ", &R);
		scanf("%s", &S);
		for (int j = 0; j < strlen(S); j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
}