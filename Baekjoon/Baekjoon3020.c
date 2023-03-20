/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 40ms

int n, h, down, up, min=200000, count=0, sum_down, sum_up=0;
int dp[500000][2] = { 0, };  //DOWN : 0, UP : 1

int main() {
	//입력
	scanf("%d %d", &n, &h);
	for (int i = 0; i < n / 2; i++) {
		scanf("%d %d", &down, &up);
		dp[down][0]++;
		dp[h+1-up][1]++;
	}
	
	//처리
	sum_down = n / 2;
	for (int i = 1; i <= h; i++) {
		sum_up += dp[i][1];
		int obstacle = sum_down + sum_up;
		sum_down -= dp[i][0];
		if (obstacle < min) { min = obstacle; count = 1; }
		else if (obstacle == min) count++;
	}

	//출력
	printf("%d %d", min, count);
	return 0;
}*/