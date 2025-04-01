int main() {
	long long n;

	scanf("%lld", &n);

	printf("%lld\n%lld", n * (n - 1) * (n - 2) / 6, 3);
}