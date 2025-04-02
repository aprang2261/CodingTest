int main() {
	int num[5];
	int avg = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		avg += num[i];
	}

	avg = avg / 5;

	for (int j = 0; j < 4; j++) {
		for (int k = j; k < 5; k++) {
			if (num[j] > num[k]) {
				int temp;

				temp = num[k];
				num[k] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("%d\n%d", avg, num[2]);
}