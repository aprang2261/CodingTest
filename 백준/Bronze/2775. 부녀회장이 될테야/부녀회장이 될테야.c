int apt(int k, int n) {
    if (k == 0) return n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += apt(k - 1, i);
    }
    return sum;
}

int main() {
    int t, k, n;

    scanf("%d", &t);

    int* result = (int*)malloc(sizeof(int) * t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &k, &n);
        result[i] = apt(k, n);
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", result[i]);
    }

    free(result);
}