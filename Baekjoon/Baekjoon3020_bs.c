/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 88ms

int n, h, low, high, mid, count, min=200000;
int arr[2][100000];  // DOWN : 0,   UP : 1

int compare(const void* f, const void* s) {
	int* n1 = (int*)f;
	int* n2 = (int*)s;
	if (*n1 < *n2) return -1;
	else return 1;
}
int bs(int flag, int key) {
	low = 0, high = n / 2 - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[flag][mid] < key) low = mid + 1;
		else high = mid - 1;
	}
	return low;
}

int main() {
	//입력
	scanf("%d %d", &n, &h);
	for (int i = 0; i < n / 2; i++) scanf("%d %d", &arr[0][i], &arr[1][i]);
	qsort(arr[0], n / 2, sizeof(int), compare);
	qsort(arr[1], n / 2, sizeof(int), compare);

	//처리
	for (int i = 0; i < h; i++) {
		int obstacle = n - bs(0, i+1)- bs(1, h - i);
		if (obstacle < min) { min = obstacle; count = 1; }
		else if (obstacle == min) count++;
	}

	//출력
	printf("%d %d", min, count);
	return 0;
}*/