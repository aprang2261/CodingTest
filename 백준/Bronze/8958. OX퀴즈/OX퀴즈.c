int main() {
	int n;
	char s[80];

	scanf("%d", &n);

	int* score = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		int j = 0;
		int total = 0;

		int point = 1;

		while (s[j] == 'O' || s[j] == 'X') {

			if (s[j] == 'O') {
				total += point;
				point++;
			}
			else {
				point = 1;
			}

			j++;
		}

		score[i] = total;
	}

	for (int k = 0; k < n; k++) {
		printf("%d\n", score[k]);
	}

	free(score);
}