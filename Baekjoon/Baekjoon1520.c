/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int m, n;
int arr[500][500];
int dp[500][500];
int dr[4] = { 0, -1, 0, 1 };
int dc[4] = { -1, 0, 1, 0 };

int isValid(int r, int c) { return r >= 0 && r < m&& c >= 0 && c < n; }
int dfs(int r, int c) {
	if (dp[r][c] != -1) return dp[r][c];
	dp[r][c] = 0;
	for (int i = 0; i < 4; i++) {
		int nr = r + dr[i], nc = c + dc[i];
		if (isValid(nr, nc) && arr[nr][nc] > arr[r][c]) dp[r][c] += dfs(nr, nc);
	}
	return dp[r][c];
}

int main() {
	//입력
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &arr[i][j]);

	//처리
	for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) dp[i][j] = -1;
	dp[0][0] = 1;
	dfs(m - 1, n - 1);

	//출력
	printf("%d", dp[m - 1][n - 1]);
	return 0;
}*/