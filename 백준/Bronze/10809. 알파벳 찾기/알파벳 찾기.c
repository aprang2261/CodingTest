#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	int cnt[26] = { 0 , };

	char S[101];

	scanf("%s", S);

	for (int i = 0; i < strlen(S); i++) {
		if (cnt[S[i] - 'a'] == 0) cnt[S[i] - 'a'] = i + 1;
	}

	for (int i = 0; i < 26; i++) {
		if (cnt[i] == 0) printf("-1 ");
		else printf("%d ", cnt[i] - 1);
	}

	return 0;
}