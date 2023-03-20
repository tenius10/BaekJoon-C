/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//dp[i][j] = ( i ~ j ) 파일을 합쳤을 때 최소 비용
//arr[i] = 1번째부터 i번째까지의 파일 크기 누적합

int t, n, arr[501], dp[501][501], min;

int main() {
	scanf("%d", &t);
	while (t-- > 0) {
		scanf("%d", &n);
		arr[0] = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &arr[i]);
			arr[i] += arr[i - 1];
			dp[i][i] = 0;
		}
		for (int i = n; i > 0; i--) {
			for (int j = i + 1; j <= n; j++) {
				min = 44880000;
				for (int k = 1; k <= j - i; k++) if (dp[i + k][j] + dp[i][i + k - 1] < min) min = dp[i + k][j] + dp[i][i + k - 1];
				dp[i][j] = arr[j] - arr[i - 1] + min;
			}
		}
		printf("%d\n", dp[1][n]);
	}

	return 0;
}*/