typedef struct {
    int index;
    int move;
} Balloon;

int main() {
    int n;
    scanf("%d", &n);

    Balloon* balloons = (Balloon*)malloc(sizeof(Balloon) * n);
    int* visited = (int*)calloc(n, sizeof(int));
    int* result = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &balloons[i].move);
        balloons[i].index = i + 1;
    }

    int current = 0;
    for (int i = 0; i < n; i++) {
        result[i] = balloons[current].index;
        int move = balloons[current].move;
        visited[current] = 1;

        if (i == n - 1) break;

        int count = 0;
        if (move > 0) {
            while (count < move) {
                current = (current + 1) % n;
                if (!visited[current]) count++;
            }
        }
        else {
            while (count < -move) {
                current = (current - 1 + n) % n;
                if (!visited[current]) count++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(balloons);
    free(visited);
    free(result);
}