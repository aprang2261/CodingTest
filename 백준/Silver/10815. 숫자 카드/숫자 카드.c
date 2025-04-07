#include <stdio.h>
#include <stdlib.h>

int compare(const int* a, const int* b) {
	return *a - *b;
}

int main() {
	int n, m;

	scanf("%d", &n);

	int* have = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &have[i]);
	}

	scanf("%d", &m);

	int* isHave = (int*)malloc(sizeof(int) * m);
	int* answer = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; i++) {
		scanf("%d", &isHave[i]);
	}

	qsort(have, n, sizeof(int), compare);

	for (int i = 0; i < m; i++) {
		int* result = (int*)bsearch(&isHave[i], have, n, sizeof(int), compare);
		if (result == NULL) answer[i] = 0;
		else answer[i] = 1;
	}

	for (int i = 0; i < m; i++) {
		printf("%d ", answer[i]);
	}

	free(have);
	free(isHave);
	free(answer);
}