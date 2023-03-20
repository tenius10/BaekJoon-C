/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char s1[1001], s2[1001];
int len1 = 0, len2 = 0, dp[1001][1001] = { 0, };

int main() {
	scanf("%s %s", s1, s2);
	while (s1[len1]) len1++;
	while (s2[len2]) len2++;
	for (int i = 1; i <= len1; i++) {
		for (int j = 1; j <= len2; j++) {
			if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
		}
	}
	printf("%d", dp[len1][len2]);
	return 0;
}*/