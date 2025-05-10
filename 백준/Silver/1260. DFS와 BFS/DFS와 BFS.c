#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int start;
    int end;
} Node;

int graph[1001][1001];
bool visited[1001];
int queue[1001];
int front = 0, rear = 0;

void dfs(int v, int n) {
    visited[v] = true;
    printf("%d ", v);
    for (int i = 1; i <= n; i++) {
        if (graph[v][i] && !visited[i]) {
            dfs(i, n);
        }
    }
}

void bfs(int v, int n) {
    for (int i = 0; i <= n; i++) visited[i] = false;

    front = 0, rear = 0;
    queue[rear++] = v;
    visited[v] = true;

    while (front < rear) {
        int cur = queue[front++];
        printf("%d ", cur);

        for (int i = 1; i <= n; i++) {
            if (graph[cur][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = true;
            }
        }
    }
}

int main() {
    int n, m, v;
    scanf("%d %d %d", &n, &m, &v);

    Node* lines = malloc(sizeof(Node) * m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &lines[i].start, &lines[i].end);
        graph[lines[i].start][lines[i].end] = 1;
        graph[lines[i].end][lines[i].start] = 1;
    }

    dfs(v, n);
    printf("\n");
    bfs(v, n);

    free(lines);
}