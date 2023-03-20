/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int dp[21][21][21]={1}; 이라고 쓰면 1,0,0,0,...이런식으로 할당됨.
int dp[21][21][21];  //0~20까지 총 21개

int main() {
	int a, b, c;
	//바텀업 방식
	for (int i = 0; i < 21; i++) for (int j = 0; j < 21; j++) for (int k = 0; k < 21; k++) dp[i][j][k] = 1;
	for (int i = 1; i < 21; i++)
		for (int j = 1; j < 21; j++)
			for (int k = 1; k < 21; k++)
				if (i < j && j < k)
					dp[i][j][k] = dp[i][j][k - 1] + dp[i][j - 1][k - 1] - dp[i][j - 1][k];
				else
					dp[i][j][k] = dp[i - 1][j][k] + dp[i - 1][j - 1][k] + dp[i - 1][j][k - 1] - dp[i - 1][j - 1][k - 1];


	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == -1 && b == -1 && c == -1) break;
		printf("w(%d, %d, %d) = ", a, b, c);
		if (a <= 0 || b <= 0 || c <= 0) {
			a = b = c = 0;
			printf("1\n", dp[a][b][c]);
		}
		else if (a > 20 || b > 20 || c > 20) {
			a = b = c = 20;
			printf("%d\n", dp[a][b][c]);
		}
		else {
			printf("%d\n", dp[a][b][c]);
		}
	}
	return 0;
}*/