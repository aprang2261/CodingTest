int main() {
	int n[8];
	int mod = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &n[i]);
	}

	for (int i = 0; i < 8; i++) {
		if (n[i] != i + 1) {
			mod = 1;
		}
	}

	if (mod != 0) {
		for (int i = 0; i < 8; i++) {
			if (n[i] != 8 - i) {
				mod = 2;
			}
		}
	}

	if (mod == 0) printf("ascending");
	else if (mod == 1) printf("descending");
	else printf("mixed");
}