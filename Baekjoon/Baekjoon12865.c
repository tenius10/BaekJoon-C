/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//dp[i] : �ִ� ��ƿ �� �ִ� ���԰� i��� ���� ���� �ִ� ��ġ
//dp[i]��� �ؼ� �賶�� ���԰� �ݵ�� i���� �� �ʿ�� ����

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