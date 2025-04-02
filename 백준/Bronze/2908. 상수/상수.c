#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char m[4], n[4];
	char temp;
	int i, j;

	scanf("%s %s", &m, &n);

	temp = m[0];
	m[0] = m[2];
	m[2] = temp;

	temp = n[0];
	n[0] = n[2];
	n[2] = temp;

	i = atoi(m);
	j = atoi(n);

	if (i < j) {
		printf("%d", j);
	}
	else {
		printf("%d", i);
	}
}