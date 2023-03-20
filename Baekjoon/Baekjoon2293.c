/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, k, input;
int dp[10001] = { 1, 0 };

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		for (int j = input; j <= k; j++) dp[j] += dp[j - input];
	}
	printf("%d", dp[k]);
	return  0;
}*/