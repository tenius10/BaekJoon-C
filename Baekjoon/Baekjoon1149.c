/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }
int min(int a, int b, int c) { return (a < b) ? (a<c)?a:c:(b<c)? b : c; }

int main() {
	int n; scanf("%d", &n);
	int dp[1000][3];

	int r, g, b;
	scanf("%d %d %d", &dp[0][0], &dp[0][1], &dp[0][2]);
	for (int i = 1; i < n; i++) {
		scanf("%d %d %d", &r, &g, &b);
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + r;
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + g;
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + b;
	}
	
	printf("%d", min(dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]));
	return 0;
}*/