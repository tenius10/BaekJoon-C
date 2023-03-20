/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }
int main() {
	int n; scanf("%d", &n);
	int dp[500][500];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			scanf("%d", &dp[i][j]);
		}
	}

	for (int i = 1; i < n; i++) {
		dp[i][0] += dp[i - 1][0];
		dp[i][i] += dp[i - 1][i - 1];
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < i; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + dp[i][j];
		}
	}

	int max = dp[n - 1][0];
	for (int i = 1; i < n; i++) if (dp[n - 1][i] > max) max = dp[n - 1][i];
	printf("%d", max);

	return 0;
}*/