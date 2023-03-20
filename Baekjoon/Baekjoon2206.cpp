/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
using namespace std;

struct track { int r, c; bool destroy; };
int n, m, visited[2][1000][1000] = { 0, }, dr[4] = { -1,1,0,0 }, dc[4] = { 0,0,-1,1 }, nr, nc, a;
char arr[1000][1001];
track tmp;
queue<track> q;

int bfs() {
	q.push({ 0,0,false });
	visited[0][0][0] = 1;
	while (!q.empty()) {
		tmp = q.front(); q.pop();
		if (tmp.r == n - 1 && tmp.c == m - 1)
			return (tmp.destroy) ? visited[1][n - 1][m - 1] : visited[0][n - 1][m - 1];

		for (int i = 0; i < 4; i++) {
			nr = tmp.r + dr[i]; nc = tmp.c + dc[i];
			if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
				a = arr[nr][nc];
				if (tmp.destroy) {
					if (!a && !visited[1][nr][nc] && !visited[0][nr][nc]) {
						visited[1][nr][nc] = visited[1][tmp.r][tmp.c] + 1;
						q.push({ nr, nc, true });
					}
				}
				else if (!visited[a][nr][nc]) {
					visited[a][nr][nc] = visited[0][tmp.r][tmp.c] + 1;
					q.push({ nr, nc, a == 1 });
				}
			}
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		for (int j = 0; j < m; j++) arr[i][j] -= '0';
	}
	printf("%d", bfs());
	return 0;
}*/