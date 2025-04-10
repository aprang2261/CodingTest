int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	int max = a > b ? a : b;
	int gcd, lcm;

	for (int i = 1; i <= max; i++) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
		}
	}

	printf("%d\n%d", gcd, a * b / gcd);
}