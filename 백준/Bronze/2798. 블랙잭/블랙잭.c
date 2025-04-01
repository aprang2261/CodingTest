int main() {
	int n, m;
	int c[100];
	int max = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &c[i]);
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (c[i] + c[j] + c[k] <= m && max < c[i] + c[j] + c[k]) {
					max = c[i] + c[j] + c[k];
				}
			}
		}
	}

	printf("%d", max);
}