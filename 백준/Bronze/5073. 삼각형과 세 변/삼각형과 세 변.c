int main() {
	int n[3];
	int t = 0;

	while (1) {
		scanf("%d %d %d", &n[0], &n[1], &n[2]);

		if (n[0] == n[1] && n[1] == n[2] && n[0] == 0) {
			break;
		}
		if (n[0] >= n[1] + n[2] || n[1] >= n[0] + n[2] || n[2] >= n[0] + n[1]) {
			printf("Invalid\n");
		}

		else if (n[0] == n[1] && n[1] == n[2]) {
			printf("Equilateral\n");
		}
		else if (n[0] != n[1] && n[1] != n[2] && n[0] != n[2]) {
			printf("Scalene\n");
		}
		else {
			printf("Isosceles\n");
		}
	}
} 