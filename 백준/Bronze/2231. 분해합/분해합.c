int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int t = i;
		int a[10];
		int j;

		for (j = 0; j < 10; j++) {
			if (t == 0) {
				break;
			}

			a[j] = t % 10;
			t /= 10;
		}

		for (int k = 0; k < j; k++) {
			t += a[k];
		}

		if (n == t + i) {
			printf("%d", i);
			break;
		}
		
		if (i == n - 1) {
			printf("0");
		}
	}
}