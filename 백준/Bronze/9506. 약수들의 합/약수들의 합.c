int main() {
	int n = 0;
	
	while (1) {
		scanf("%d", &n);

		int t = n;
		int sum = 1;
		char temp1[200] = "1";
		char temp2[5];

		while (t != 1 && n != -1) {
			if (n % t == 0 && n / t != 1) {
				sprintf(temp2, "%d", n / t);
				strcat(temp1, " + ");
				strcat(temp1, temp2);
				sum = sum + n / t;
			}
			t--;
		}

		if (n == -1) {
			break;
		}
		else if (sum == n) {
			printf("%d = ", n);
			printf("%s\n", temp1);
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}
	}
}