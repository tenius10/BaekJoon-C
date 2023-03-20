/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//n차원일 때도 {0} 써서 전부 0으로 초기화 가능
int dp[21][21][21] = { 0 };  //0~20까지 총 21개

//C언어일 때는 topDown이나 bottomUp이나 8ms로 똑같은데
//C++로 써서 제출하면 topDown이 428ms, bottomUp이 628ms로 탑다운 방식이 더 빠르게 나옴.
//이 문제의 경우는 dp테이블의 각 원소를 모두 구할 필요가 없어서 bottomUp이 불리했다.
int w(int a, int b, int c) {
	//탑다운방식
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
	if (dp[a][b][c]) return dp[a][b][c];
	if (a < b && b < c) dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return dp[a][b][c];
}
int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == -1 && b == -1 && c == -1) break;
		printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
	}
	return 0;
}*/