int main() {
	int t;

	scanf("%d", &t);

	char** list = (char**)malloc(sizeof(char*) * t);

	for (int i = 0; i < t; i++) {
		list[i] = (char*)malloc(sizeof(char) * 51);
		scanf("%s", list[i]);

		int count = 0;
		for (int j = 0; j < strlen(list[i]); j++) {
			if (list[i][j] == '(') {
				count++;
			}
			else {
				count--;
				if (count < 0) {
					break;
				}
			}
		}

		if (count == 0) strcpy(list[i], "YES\n");
		else strcpy(list[i], "NO\n");
	}

	for (int i = 0; i < t; i++) {
		printf("%s", list[i]);
	}
}