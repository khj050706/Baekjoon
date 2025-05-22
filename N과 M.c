#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10

int n, m;
int visited[MAX] = { 0 };
int path[MAX];

void dfs(int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++)
            printf("%d ", path[i]);
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = 1;
            path[depth] = i;
            dfs(depth + 1);
            visited[i] = 0; // 백트래킹: 선택 취소
        }
    }
}

int main() {

    scanf("%d %d", &n, &m);
    dfs(0);
    return 0;
}
