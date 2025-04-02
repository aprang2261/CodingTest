#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int i = 6;
	int count = 1;
	int share;
	scanf("%d", &n);

	share = (n + 4) / 6;

	if (share == 0) {
		printf("1");
	}
	else {
		while (1) {
			share = share - count;
			if (share <= 0) {
				printf("%d", count + 1);
				break;
			}
			count += 1;
		}
	}
}