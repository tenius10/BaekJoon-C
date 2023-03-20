/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m;
char arr[100][101];
int visited[100][100] = { 0 };
int min = 10000;

typedef struct {
	int r, c;
}point;
int top = -1;
point stack[10000];


int isValid(int r, int c, int nr, int nc) {
	if (nr >= 0 && nr < n && nc >= 0 && nc < m && arr[nr][nc]-'0') {
		if (!visited[nr][nc] || visited[r][c] + 1 < visited[nr][nc]) {
			return 1;
		}
	}
	return 0;
}
int isEmpty() {
	return top == -1;
}
void push(int r, int c, int nr, int nc) {
	if (isValid(r, c, nr, nc)) {
		top++;
		stack[top].r = nr;
		stack[top].c = nc;

		visited[nr][nc] = visited[r][c] + 1;
	}
}
point pop() {
	return stack[top--];
}

void dfs() {
	top++;
	stack[0].r = 0; stack[0].c = 0;
	visited[0][0] = 1;

	while (!isEmpty()) {
		point p = pop();
		if (p.r == n - 1 && p.c == m - 1) {
			if (visited[n - 1][m - 1] < min) min = visited[n - 1][m - 1];
			continue;
		}
		push(p.r, p.c, p.r + 1, p.c);  //하
		push(p.r, p.c, p.r, p.c + 1);  //우
		push(p.r, p.c, p.r - 1, p.c);  //상
		push(p.r, p.c, p.r, p.c - 1);  //좌
	}
}

int main() {
	//입력
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) scanf("%s", arr[i]);

	//처리
	dfs();

	//출력
	printf("%d", min);
	return 0;
}*/