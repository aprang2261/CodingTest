int compare(const int* a, const int* b) {
    return(*a - *b);
}

int main() {
    int people, sum = 0, total = 0;

    scanf("%d", &people);

    int* turnaround = malloc(sizeof(int) * people);

    for (int i = 0; i < people; i++) {
        scanf("%d", &turnaround[i]);
    }

    qsort(turnaround, people, sizeof(int), compare);

    for (int i = 0; i < people; i++) {
        sum += turnaround[i];
        total += sum;
    }

    printf("%d", total);
}