int main() {
	int n, a, b;
	int a_max = -10001, a_min = 10001, b_max = -10001, b_min = 10001;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);

		if (a_max < a) a_max = a;
		if (a_min > a) a_min = a;
		if (b_max < b) b_max = b;
		if (b_min > b) b_min = b;
	}

	printf("%d", (a_max - a_min) * (b_max - b_min));
}