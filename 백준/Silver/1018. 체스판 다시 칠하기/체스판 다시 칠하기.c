int main() {
	int row, col;
	char chess[50][50];
	char w[8] = "WBWBWBWB";
	char b[8] = "BWBWBWBW";
	int min = 64;
	int count = 0;

	scanf("%d %d", &row, &col);

	for (int i = 0; i < row; i++) {
		scanf("%s", &chess[i]);
	}

	for (int j = 0; j <= row - 8; j++) {
		for (int k = 0; k <= col - 8; k++) {
			count = 0;

			for (int l = j; l < j + 8; l++) {
				for (int m = k; m < k + 8; m++) {
					if (w[m - k] != chess[l][m] && l % 2 == 0) {
						count++;
					}
					if (b[m - k] != chess[l][m] && l % 2 == 1) {
						count++;
					}
				}
			}

			if (64 - count < count) {
				count = 64 - count;
			}

			if (count < min) {
				min = count;
			}
		}
	}

	printf("%d", min);
}