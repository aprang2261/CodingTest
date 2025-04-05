typedef struct test {
	int student;
	int* score;
} test;

int main() {
	int c;

	scanf("%d", &c);

	test* n = (test*)malloc(sizeof(test) * c);
	double* ratio = (double*)malloc(sizeof(double) * c);

	for (int i = 0; i < c; i++) {
		int avg = 0;

		scanf("%d ", &n[i].student);
		
		n[i].score = (int*)malloc(sizeof(int) * n[i].student);

		for (int j = 0; j < n[i].student; j++) {
			scanf("%d", &n[i].score[j]);
			avg += n[i].score[j];
		}

		avg /= n[i].student;

		int count = 0;

		for (int j = 0; j < n[i].student; j++) {
			if (avg < n[i].score[j]) count++;
		}

		ratio[i] = (double)count / n[i].student * 100;
	}

	for (int i = 0; i < c; i++) {
		printf("%.3f%%\n", ratio[i]);
		free(n[i].score);
	}

	free(n);
	free(ratio);
}