int main() {
    int n;
    int count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int max = n / i;
        if (max < i) break;
        count += (max - i + 1);
    }

    printf("%d", count);
}