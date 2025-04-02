int main() {
	int n;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			n = n / i;
			printf("%d\n", i);
			i--;
		}
	}
}