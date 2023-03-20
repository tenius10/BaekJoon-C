/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, d, k, c, arr[30000], kind[3001] = { 0, }, count = 0, result = 0;

int main() {
	//입력
	scanf("%d %d %d %d", &n, &d, &k, &c);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	//처리
	kind[c]++; count++;
	for (int i = 0; i < k; i++) if (!(kind[arr[i]]++)) count++;
	result = count;
	for (int i = 0; i < n-1; i++) {
		if (!(--kind[arr[i]])) count--;  //제일 왼쪽 초밥 선택 해제
		if (!(kind[arr[(k + i) % n]]++)) count++;  //오른쪽에 새로운 초밥 선택
		result = count > result ? count : result;
	}

	//출력
	printf("%d", result);
	return 0;
}*/