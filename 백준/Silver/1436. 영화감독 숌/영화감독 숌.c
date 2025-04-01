int main() {
	int n;
	int	i = 0;
	int count = 0;

	scanf("%d", &n);

	while (1) {
		i++;
		
		int t = i;
		int a[50];
		int j;

		for (j = 0; j < 50; j++) {
			if (t == 0) {
				break;
			}

			a[j] = t % 10;
			t /= 10;
		}

		for (int k = 0; k < j - 2; k++) {
			if (a[k] == a[k + 1] && a[k + 1] == a[k + 2] && a[k] == 6) {
				count++;

				break;
			}
		}

		if (count == n) {
			printf("%d", i);

			break;
		}
	}
}