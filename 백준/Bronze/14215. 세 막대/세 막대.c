int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a >= b + c) a = b + c - 1;
	if (b >= a + c) b = a + c - 1;
	if (c >= a + b) c = a + b - 1;

	printf("%d", a + b + c);
}