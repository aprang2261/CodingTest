int main(void) {
	long long int fib[90] = { 0 };
	int i, n;

	scanf("%d", &n);

	fib[0] = 0, fib[1] = 1;

	for (i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	printf("%lld\n", fib[n]);
}