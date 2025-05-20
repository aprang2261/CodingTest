int main() {
    int n;
    scanf("%d", &n);

    int fib[46];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("%d\n", fib[n]);
}