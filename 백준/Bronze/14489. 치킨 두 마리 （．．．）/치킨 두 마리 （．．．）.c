int main() {
    long long A, B, C;
    scanf("%lld %lld", &A, &B);
    scanf("%lld", &C);

    long long sum = A + B;
    long long cost = 2 * C;

    if (sum >= cost)
        printf("%lld\n", sum - cost);
    else
        printf("%lld\n", sum);
}