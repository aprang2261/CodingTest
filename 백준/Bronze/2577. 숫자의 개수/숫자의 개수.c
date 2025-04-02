int main() {
	int n, a, b, c, t;
	int i = 0;
	int num[10];

	scanf("%d\n%d\n%d", &a, &b, &c);

	n = a * b * c;

	t = n;

	while (t != 0) {
		num[i] = t % 10;
		t = t / 10;
		i++;
	}

	for (int j = 0; j < 10; j++) {
		int count = 0;
		for (int k = 0; k < i; k++) {
			if (j == num[k]) {
				count++;
			}
		}

		printf("%d\n", count);
	}
}