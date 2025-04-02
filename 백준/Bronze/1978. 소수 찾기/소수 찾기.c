int main() {
	int n;
	int prime = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int num[100];
		int count = 0;

		scanf("%d", &num[i]);

		for (int j = 1; j <= num[i]; j++) {
			if (num[i] % j == 0) {
				count++;
			}
		}

		if (count == 2) {
			prime++;
		}
	}

	printf("%d", prime);
}