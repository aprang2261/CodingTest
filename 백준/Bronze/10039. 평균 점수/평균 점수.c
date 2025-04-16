int main() {
    int score;
    int total = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &score);
        if (score < 40) {
            score = 40;
        }
        total += score;
    }

    printf("%d\n", total / 5);
}