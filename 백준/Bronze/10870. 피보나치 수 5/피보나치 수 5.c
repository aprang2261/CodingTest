int main() {
	int n;
	int count = 0;

	scanf("%d", &n);

	if (n == 0) printf("0");
	else if (n == 1) printf("1");
	else {
		int i = 0;
		int j = 1;
		int sum = 0;

		while (count != n - 1) {
			sum = i + j;

			i = j;
			j = sum;
			count++;
		}

		printf("%d", sum);
	}
}