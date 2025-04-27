int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int num = factorial(n);
    int den = factorial(k) * factorial(n - k);
    int result = num / den;

    printf("%d\n", result);
}