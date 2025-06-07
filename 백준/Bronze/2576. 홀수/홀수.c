int main() {
    int num;
    int sum = 0;
    int min = 101;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &num);
        if (num % 2 == 1) {
            sum += num;
            if (num < min) {
                min = num;
            }
        }
    }

    if (sum == 0) {
        printf("-1\n");
    } else {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
}