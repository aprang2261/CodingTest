#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int total;

	scanf("%d", &n);

	total = pow(pow(2, n) + 1, 2);

	printf("%d", total);
}