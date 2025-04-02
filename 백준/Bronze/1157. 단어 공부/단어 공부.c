#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char S[1000001];
	int apb[26] = { 0, };
	int max = -1;
	int maxindex;
	int n = 0;

	scanf("%s", &S);
	int len = strlen(S);

	for (int i = 0; i < len; i++) {
		if (S[i] - 'A' > 31) {
			S[i] = S[i] - 32;
		}
		apb[S[i] - 65]++;
	}

	for (int i = 0; i < 26; i++) {
		if (apb[i] > max) {
			max = apb[i];
			maxindex = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (apb[i] == max) {
			n++;
		}
		if (n > 1) {
			printf("?");
			return 0;
		}
	}

	printf("%c", maxindex + 65);
	return 0;
}