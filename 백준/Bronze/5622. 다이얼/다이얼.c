#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char S[16];
	int N, cnt = 0;

	scanf("%s", &S);

	for (int i = 0; i < strlen(S); i++) {
		N = S[i] - 'A';
		
		if (N < 15) {
			cnt = (N / 3) + 3 + cnt;
		}
		else if (N < 19) {
			cnt = 8 + cnt;
		}
		else if (N < 22) {
			cnt = 9 + cnt;
		}
		else {
			cnt = 10 + cnt;
		}
	}

	printf("%d", cnt);
}