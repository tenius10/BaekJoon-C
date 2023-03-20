/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 주의 ) 주어진 수열에서 수를 연속적이지 않게 가져와도 됨 (4ms)

int n, s;
int arr[20];
int count = 0;

void dfs(int step, int sum) {
	if (step == n) {
		if (sum == s) count++;
		return;
	}

	dfs(step + 1, sum + arr[step]);
	dfs(step + 1, sum);
}

int main() {
	//입력
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	//처리
	dfs(0, 0);

	//출력
	if (s == 0) count--;  //sum이 0일 경우 dfs() 들어가자마자 count가 증가함.
	printf("%d", count);
	return 0;
}*/