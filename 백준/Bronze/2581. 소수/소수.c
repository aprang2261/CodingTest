int main() {
	int m, n;
	int num[2000];
	int k = 0;
	int sum = 0;

	scanf("%d", &m);
	scanf("%d", &n);

	for (int i = m; i <= n; i++) {
		int count = 0;

		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}

		if (count == 2) {
			num[k] = i;
			k++;
		}
	}

	for (int i = 0; i < k; i++) {
		sum = sum + num[i];
	}

	if (k == 0) {
		printf("-1");
	}
	else {
		printf("%d\n", sum);
		printf("%d", num[0]);
	}
}