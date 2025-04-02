int main() {
	int a[3], b[3];
	int c = 0;
	int d = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &a[i], &b[i]);
		c = c + a[i];
		d = d + b[i];
	}

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (a[i] == a[j]) {
				c = c - 2 * a[j];
			}
			if (b[i] == b[j]) {
				d = d - 2 * b[j];
			}
		}
	}

	printf("%d %d", c, d);
}