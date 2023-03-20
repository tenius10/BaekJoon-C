/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100000];
int dp[100000];
int n;

int max(int a, int b) { return (a > b) ? a : b; }
int main() {
	//입력
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	//dp
	dp[0] = arr[0];
	int maxRe = dp[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
		if (dp[i] > maxRe) maxRe = dp[i];
	}

	//출력
	printf("%d", maxRe);
	
	return 0;
}*/