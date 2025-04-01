int main() {
	int n;
	int min = 5000;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (3 * j == n && i == 0) {
				if (min > i + j) {
					min = i + j;
				}
			}

			if (5 * i + 3 * j == n && i > 0) {
				if (min > i + j) {
					min = i + j;
				}
			}
		}
	}

	if (min == 5000) {
		min = -1;
	}

	printf("%d", min);
}