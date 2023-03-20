/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//dp[i][j] = ( i ~ j )수열가 팰린드롬 수열인지 여부
//2차원 배열로 일일이 구해주는 방법보다 가운데 수를 기준으로 odd, even을 채워주는 방법이
//시간/메모리 면에서 훤씬 효율적이다. 
//이유 : 가운데 수를 기준으로 채울 때는 중간에 숫자가 대칭이 아닐 경우 break로 for문을 빠져나와서 (n*(n+1)) / 2 보다 적거나 같은 연산 횟수를 지니는데
//			2차원 배열은 가운데를 기준으로 채우는 연산이 조금 더 복잡하고 메모리도 심하게 낭비된다.

//odd[i] : 길이가 홀수이고 가운데 수의 인덱스가 i인 팰린드롬 수의 개수
//even[i] : 길이가 짝수이고 가운데 수의 인덱스 i인 팰린드롬 수의 개수
int n, m, s, e, arr[2000], odd[2000] = { 0, }, even[2000] = { 0, }, i, l, r;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &arr[i]);
	for (i = 0; i < n; i++) {
		for (l = i, r = i; l >= 0 && r < n; l--, r++) {
			if (arr[l] == arr[r]) odd[i]++;
			else break;
		}
		for (l = i, r = i + 1; l >= 0 && r < n; l--, r++) {
			if (arr[l] == arr[r]) even[i]++;
			else break;
		}
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &s, &e);
		s--; e--;
		if ((e - s) % 2) {
			//수열이 짝수인 경우
			if (even[(s + e) / 2] >= (e - s + 1) / 2) printf("1\n");
			else printf("0\n");
		}
		else {
			//수열이 홀수인 경우
			if (odd[(s + e) / 2] >= (e - s) / 2 + 1) printf("1\n");
			else printf("0\n");
		}
	}
	return 0;
}*/