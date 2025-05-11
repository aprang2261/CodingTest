int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int maze[100][100];
    int visited[100][100] = { 0 };
    char line[101];

    for (int i = 0; i < n; i++) {
        scanf("%s", line);

        for (int j = 0; j < m; j++) {
            maze[i][j] = line[j] - '0';
        }
    }

    int queue[10000][2];
    int front = 0, rear = 0;

    queue[rear][0] = 0;
    queue[rear][1] = 0;
    rear++;
    visited[0][0] = 1;

    int dx[4] = { 0, 0, -1, 1 };
    int dy[4] = { -1, 1, 0, 0 };

    while (front < rear) {
        int x = queue[front][0];
        int y = queue[front][1];
        front++;

        if (x == n - 1 && y == m - 1) {
            printf("%d\n", visited[x][y]);
            return 0;
        }

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (maze[nx][ny] == 1 && visited[nx][ny] == 0) {
                    visited[nx][ny] = visited[x][y] + 1;
                    queue[rear][0] = nx;
                    queue[rear][1] = ny;
                    rear++;
                }
            }
        }
    }
}