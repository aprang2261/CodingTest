int main() {
	int t, h, w, n;

	scanf("%d", &t);

	int* room = (int*)malloc(sizeof(int) * t);

	for (int i = 0; i < t; i++) {
		int count = 0;

		scanf("%d %d %d", &h, &w, &n);

		if (n % h == 0) room[i] =  h * 100 + n / h;
		else room[i] = n % h * 100 + n / h + 1;
	}
	
	for (int i = 0; i < t; i++) {
		printf("%d\n", room[i]);
	}

	free(room);
}