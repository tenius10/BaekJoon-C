/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// 0ms

int k, n, mid, high;
long long low, sum = 0;
int arr[10000];

int main() {
	//입력
	scanf("%d %d", &k, &n);
	for (int i = 0; i < k; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	//처리
	low = 1;
	high = (sum / n < INT_MAX) ? sum / n : INT_MAX;
	while (low <= high) {
		sum = 0;
		mid = (low + high) / 2;
		for (int i = 0; i < k; i++) sum += (arr[i] / mid);

		if (sum < n) high = mid - 1;
		else low = mid + 1ll;
	}

	//출력
	printf("%d", high);
	return 0;
}*/