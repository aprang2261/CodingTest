int main() {
	int n;

	scanf("%d", &n);

	for (int i = n - 1; i >= 0; i--) {
		for (int j = i; j > 0; j--) {
			printf(" ");
		}

		for (int j = 2 * (n - i) - 1; j > 0; j--) {
			printf("*");
		}

		printf(" ");

		printf("\n");
	}
}