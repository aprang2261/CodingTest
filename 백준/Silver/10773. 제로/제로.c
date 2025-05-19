int main() {
    int k;
    scanf("%d", &k);

    int stack[100000];
    int top = 0;

    for (int i = 0; i < k; i++) {
        int num;
        scanf("%d", &num);

        if (num == 0) {
            if (top > 0) {
                top--;
            }
        } else {
            stack[top++] = num;
        }
    }

    int sum = 0;
    for (int i = 0; i < top; i++) {
        sum += stack[i];
    }

    printf("%d\n", sum);
}