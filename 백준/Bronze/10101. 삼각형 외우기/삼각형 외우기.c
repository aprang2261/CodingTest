int main() {
	int n[3];
	int t = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &n[i]);

		t += n[i];
	}

	if (t != 180) {
		printf("Error");
	}
	else if (n[0] == n[1] && n[1] == n[2]) {
		printf("Equilateral");
	}
	else if (n[0] != n[1] && n[1] != n[2] && n[0] != n[2]) {
		printf("Scalene");
	}
	else {
		printf("Isosceles");
	}
}