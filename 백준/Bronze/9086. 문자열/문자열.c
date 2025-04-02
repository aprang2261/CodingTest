#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	int N;
	char S[1001];

	scanf("%d", &N);

	while (N--) {
		scanf("%s", S);

		printf("%c%c \n", S[0], S[strlen(S) - 1]);
	}

	return 0;
}