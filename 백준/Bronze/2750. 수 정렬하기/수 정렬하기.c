int main() {
	int n;
	int num[1000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (int j = 0; j < n - 1; j++) {
		for (int k = j; k < n; k++) {
			if (num[j] > num[k]) {
				int temp;

				temp = num[k];
				num[k] = num[j];
				num[j] = temp;
			}
		}
	}

	for (int l = 0; l < n; l++) {
		printf("%d\n", num[l]);
	}
}