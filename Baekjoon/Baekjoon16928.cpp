/*#define _CRT_SECURE_NO_WARNINGS
#define LADDER 0
#define SNAKE 1
#include <iostream>
#include <queue>
using namespace std;

struct track { int cnt, pos; };
int n, m, x, y, board[2][101] = { 0, }, nxt;
bool visited[101];
queue<track> q;
track tmp;

int bfs() {
	q.push({ 0,1 });
	while (!q.empty()) {
		tmp = q.front(); q.pop();
		for (int i = 1; i < 7; i++) {
			nxt = tmp.pos + i;
			if (nxt == 100) return tmp.cnt + 1;
			if (nxt < 100 && !visited[nxt]) {
				visited[nxt] = true;
				if (board[LADDER][nxt]) {
					if (!visited[board[LADDER][nxt]]) {
						visited[board[LADDER][nxt]] = true;
						q.push({ tmp.cnt + 1, board[LADDER][nxt] });
					}
				}
				else if (board[SNAKE][nxt]) {
					if (!visited[board[SNAKE][nxt]]) {
						visited[board[SNAKE][nxt]] = true;
						q.push({ tmp.cnt + 1, board[SNAKE][nxt] });
					}
				}
				else q.push({ tmp.cnt + 1, nxt });
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
		cin >> x >> y;
		board[LADDER][x] = y;
	}
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		board[SNAKE][x] = y;
	}
	cout << bfs();
	return 0;
}*/