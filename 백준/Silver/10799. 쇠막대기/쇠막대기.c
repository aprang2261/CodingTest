int main() {
    char stick[100001];
    int stack[100001];
    int top = -1;
    int result = 0;

    scanf("%s", stick);
    int len = strlen(stick);

    for (int i = 0; i < len; i++) {
        if (stick[i] == '(') {
            stack[++top] = i;
        }
        else {
            top--;

            if (stick[i - 1] == '(') {
                result += top + 1;
            }
            else {
                result += 1;
            }
        }
    }

    printf("%d\n", result);
}