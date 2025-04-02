#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num[1000];
	int avg = 0;
	int n, r;

	scanf("%d %d", &n, &r);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (int j = 0; j < n - 1; j++) {
		for (int k = j; k < n; k++) {
			if (num[j] > num[k]) {
				int temp;

				temp = num[k];
				num[k] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("%d", num[n - r]);
}