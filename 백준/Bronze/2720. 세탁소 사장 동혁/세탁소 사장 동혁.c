#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int k[1000][4];
	int money;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &money);

		k[i][0] = money / 25;
		if (money/25 != 0) {
			money = money - 25 * (money / 25);
		}

		if (money != 0) {
			k[i][1] = money / 10;
			if (money / 10 != 0) {
				money = money - 10 * (money / 10);
			}
		}
		else {
			k[i][1] = 0;
		}
		
		if (money != 0) {
			k[i][2] = money / 5;
			if (money / 5 != 0) {
				money = money - 5 * (money / 5);
			}
		}
		else {
			k[i][2] = 0;
		}

		k[i][3] = money;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", k[i][j]);
		}
		printf("\n");
	}
}