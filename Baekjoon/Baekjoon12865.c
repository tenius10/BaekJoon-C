/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//dp[i] : 최대 버틸 수 있는 무게가 i라고 했을 때의 최대 가치
//dp[i]라고 해서 배낭의 무게가 반드시 i여야 할 필요는 없음

int n, k, w, v, dp[100001] = { 0, };

int max(int a, int b) { return a > b ? a : b; }

int main() {
	scanf("%d %d", &n, &k);
	while (n-- > 0) {
		scanf("%d %d", &w, &v);
		for (int i = k; i >= w; i--) dp[i] = max(dp[i], dp[i - w] + v);
	}
	printf("%d", dp[k]);
	return 0;
}*/