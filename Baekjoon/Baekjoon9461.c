/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

long long dp[101];  //0번 인덱스는 안 쓸거임.
long long p(int n) {
	dp[1] = dp[2] = dp[3] = 1;
	dp[4] = dp[5]=2;
	for (int i = 6; i <= n; i++) {
		if (dp[i]) continue;
		else dp[i] = dp[i - 1] + dp[i - 5];
	}
	return dp[n];
}

int main() {
	int t; scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int in; scanf("%d", &in);
		printf("%lld\n", p(in));
	}

	return 0;
}*/