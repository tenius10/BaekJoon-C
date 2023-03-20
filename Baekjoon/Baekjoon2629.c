/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// dp[i] = 구슬의 무게가 i 일때 추를 이용하여 저울의 균형을 맞출 수 있는 경우가 있는지 여부
// 내가 범한 오류 : dp[i]의 값은 양팔 저울의 왼쪽과 오른쪽의 차이다.
//
// 예를 들어 (오른쪽 추의 합)-(왼쪽 추의 합)을 기록한다고 하면
// 둘 중 더 무게가 적게 나가는 쪽에 구슬을 올려두면 된다. (이때 구슬의 무게는 둘의 차)
// 
// 추를 처음 올려둔 위치를 기준으로 무게가 계산된다.
// 때문에 처음에 오른쪽에 올려뒀으나 그 이후 왼쪽에 추를 많이 둬서 왼쪽이 더 무거워지면 
// (오른쪽 추의 합)-(왼쪽 추의 합)은 음수가 된다. 하지만 그럼에도 구슬의 무게는 둘의 차(절댓값)이기 때문에 구할 수 있다.
// 그러니까 dp[a-b]로 구슬의 무게를 의미하는 인덱스 a-b (b>a)가 음수여도 괜찮다
// (어차피 구하고자 하는 건 저울의 양쪽 간 차이(절댓값)이기 때문)

int n, t, w, arr[31], sum;
char dp[15001] = { 0, };

int abs(int a) { return a > 0 ? a : -a; }

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
	sum = arr[n];
	dp[arr[n]] = n;
	for (int i = n - 1; i > 0; i--) {
		sum += arr[i];
		if (!dp[arr[i]]) dp[arr[i]] = i;
		for (int j = 1; j <= sum; j++) {
			if (dp[j] && dp[j] != i) {
				if (!dp[abs(j - arr[i])]) dp[abs(j - arr[i])] = i;
				if (!dp[j + arr[i]]) dp[j + arr[i]] = i;
			}
		}
	}
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &w);
		if (w > 15000) printf("N ");
		else printf("%c ", dp[w] ? 'Y' : 'N');
	}
	return 0;
}*/