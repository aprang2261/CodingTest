int main() {
    int n, x;
    scanf("%d", &n);

    int count[10001] = { 0 };

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        count[x]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (count[i]--) {
            printf("%d\n", i);
        }
    }
}