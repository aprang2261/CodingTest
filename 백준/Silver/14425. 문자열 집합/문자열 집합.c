#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
	return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
	int n, m, count = 0;

	scanf("%d %d", &n, &m);

	char** str = (char**)malloc(sizeof(char*) * n);

	for (int i = 0; i < n; i++) {
		str[i] = (char*)malloc(sizeof(char) * 501);
		scanf("%s", str[i]);
	}

	char** substr = (char**)malloc(sizeof(char*) * m);

	for (int i = 0; i < m; i++) {
		substr[i] = (char*)malloc(sizeof(char) * 501);
		scanf("%s", substr[i]);
	}

	qsort(str, n, sizeof(char*), compare);

	for (int i = 0; i < m; i++) {
		char** found = (char**)bsearch(&substr[i], str, n, sizeof(char*), compare);

		if (found != NULL) {
			count++;
		}
	}

	for (int i = 0; i < n; i++) free(str[i]);
	free(str);

	for (int i = 0; i < m; i++) free(substr[i]);
	free(substr);

	printf("%d\n", count);
}