#include <stdio.h>
#include <stdbool.h>

int graph[100][100] = { 0 };
bool visited[100] = { false };
int n;

int dfs(int node) {
    visited[node] = true;
    int count = 1;

    for (int i = 0; i < n; i++) {
        if (graph[node][i] && !visited[i]) {
            count += dfs(i);
        }
    }

    return count;
}

int main() {
    int m;
    scanf("%d", &n);
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a - 1][b - 1] = 1;
        graph[b - 1][a - 1] = 1;
    }

    int infected = dfs(0) - 1;
    printf("%d\n", infected);
}