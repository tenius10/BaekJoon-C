/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m;
char arr[100][101];
int visited[100][100] = {0};

typedef struct {
	int r, c;
}point;
int front = -1, rear = -1;
point queue[10000];


int isValid(int r, int c, int nr, int nc) {
	if (nr >= 0 && nr < n && nc >= 0 && nc < m && arr[nr][nc]-'0') {
		if (!visited[nr][nc]) {
			return 1;
		}
	}
	return 0;
}
int isEmpty() {
	return front == rear;
}
void enqueue(int r, int c, int nr, int nc) {
	if (isValid(r, c, nr, nc)) {
		rear++;
		queue[rear].r = nr;
		queue[rear].c = nc;

		visited[nr][nc] = visited[r][c] + 1;
	}
}
point dequeue() {
	if (front == rear) return;
	return queue[++front];
}

int bfs() {
	rear++;
	queue[0].r = 0; queue[0].c = 0;
	visited[0][0] = 1;

	while (!isEmpty()) {
		point p = dequeue();
		if (p.r == n - 1 && p.c == m - 1) {
			return visited[n - 1][m - 1];
		}
		enqueue(p.r, p.c, p.r + 1, p.c);  //하
		enqueue(p.r, p.c, p.r, p.c + 1);  //우
		enqueue(p.r, p.c, p.r - 1, p.c);  //상
		enqueue(p.r, p.c, p.r, p.c - 1);  //좌
	}
	return -1;
}

int main() {
	//입력
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) scanf("%s", arr[i]);

	//출력
	printf("%d", bfs());
	return 0;
}*/