int main() {
	int a, b, c;
	int count = 0;

	scanf("%d %d", &a, &b);

	int d = a;

	while (count != b && d != 0) {
		if (a % d == 0) {
			count++;
		}
		d--;
	}

	c = a / (d + 1);

	if (b > count) {
		c = 0;
	}

	printf("%d", c);
}