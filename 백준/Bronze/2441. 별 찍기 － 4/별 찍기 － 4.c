int main() {
	int n;

	scanf("%d", &n);

	for (int i = n; i >= 0; i--) {
		for (int j = n - i; j > 0; j--) {
			printf(" ");
		}

		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}