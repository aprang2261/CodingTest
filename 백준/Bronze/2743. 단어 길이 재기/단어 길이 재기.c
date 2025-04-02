#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char S[101] = "";
	int length;
	
	scanf("%s", S);

	for (int i = 0; i < S; i++) {
		if (S[i] == '\0') {
			length = i;
			break;
		}
	}

	printf("%d", length);
}