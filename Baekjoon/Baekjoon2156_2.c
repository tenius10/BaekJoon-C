/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;
int arr[10001];
int dp[10001];

int max(int a, int b) { return a < b ? b : a; }

int main() {
	//입력
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) scanf("%d", &arr[i]);

	//처리
	dp[0] = 0; 
	dp[1] = arr[1]; 
	dp[2] = arr[1] + arr[2];
	for (int i = 3; i < n + 1; i++) dp[i] = max(dp[i - 1], max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]));

	//출력
	printf("%d", dp[n]);
	return 0;
}*/