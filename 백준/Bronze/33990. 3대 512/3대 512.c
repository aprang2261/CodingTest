int main() {
    int n;
    scanf("%d", &n);
    int best = -1;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int sum = a + b + c;
        if (sum >= 512) {
            if (best == -1 || sum < best) {
                best = sum;
            }
        }
    }

    printf("%d\n", best);
}