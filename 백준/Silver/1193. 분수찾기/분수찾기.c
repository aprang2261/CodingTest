#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1;
	int j = 1;
	int max = 1;
	int count = 1;
	int input;

	scanf("%d", &input);

	while (count != input) {
		if (max == j && count != input) {
			count++;
			max++;
			j++;

			while (i != max && count != input) {
				j--;
				i++;
				count++;
			}
		}

		if (max == i && count != input) {
			count++;
			max++;
			i++;

			while (j != max && count != input) {
				i--;
				j++;
				count++;
			}
		}
	}

	printf("%d/%d\n", i, j);
}