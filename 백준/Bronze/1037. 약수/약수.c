int main() {
    int n;
    scanf("%d", &n);

    int min = 1000001;
    int max = 0;
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x < min) min = x;
        if (x > max) max = x;
    }

    printf("%d\n", min * max);
}