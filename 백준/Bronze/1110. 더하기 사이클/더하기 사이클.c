int main() {
	int n, t;
	int sum = 0;
	int count = 0;

	scanf("%d", &n);

	if (n < 10) {
		n *= 10;
	}

	t = n;

	while (1) {
		sum = t / 10 + t % 10;
		t = t % 10 * 10 + sum % 10;
		count++;

		if (t == n) {
			break;
		}
	}

	printf("%d", count);
}