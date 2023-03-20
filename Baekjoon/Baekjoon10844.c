/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, arr[24] = { 0,0,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,0 }, * before, * after, * temp, sum = 0;

int main() {
	//입력
	scanf("%d", &n);

	//처리
	before = arr, after = &arr[12];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 10; j++) after[j] = (before[j - 1] + before[j + 1]) % 1000000000;
		temp = after, after = before, before = temp;
	}
	for (int i = 1; i <= 10; i++) sum = (sum + after[i]) % 1000000000;

	//출력
	printf("%d", sum);
	return 0;
}*/