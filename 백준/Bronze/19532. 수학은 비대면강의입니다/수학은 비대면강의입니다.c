int main() {
	int a, b, c, d, e, f;
	int x, y;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	x = a * e - d * b;
	x = (c * e - f * b) / x;

	y = b * d - e * a;
	y = (c * d - f * a) / y;

	printf("%d %d", x, y);
}