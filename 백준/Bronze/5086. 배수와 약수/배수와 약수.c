int main() {
	int a, b;

	while (1) {
		scanf("%d %d", &a, &b);

		if (a != 0 && b != 0) {
			if (b % a == 0 && b / a >= 1) {
				printf("factor\n");
			}

			else if (a % b == 0 && a / b >= 1) {
				printf("multiple\n");
			}

			else {
				printf("neither\n");
			}
		}

		else {
			break;
		}
	}
}