int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int t;
    int results[1000];

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        results[i] = (a * b) / gcd(a, b);
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", results[i]);
    }
}