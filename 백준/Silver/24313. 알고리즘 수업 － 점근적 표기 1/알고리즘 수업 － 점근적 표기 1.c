int main() {
	int a1, a0;
	int c;
	int n0;

	scanf("%d %d", &a1, &a0);
	scanf("%d", &c);
	scanf("%d", &n0);

	if (a1 * n0 + a0 <= c * n0 && a1 <= c) {
		printf("1");
	}

	else {
		printf("0");
	}
}