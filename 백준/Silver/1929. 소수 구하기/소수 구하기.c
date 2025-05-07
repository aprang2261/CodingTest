int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        if (i < 2) continue;

        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", i);
        }
    }
}