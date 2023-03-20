/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int n, m, in, low, mid, high;
int a[100000];

int compare(const void* f, const void* s) {
	int* a = (int*)f;
	int* b = (int*)s;
	if (*a < *b) return -1;
	else if (*a > *b) return 1;
	else return 0;
}
int bs(int key) {
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (key < a[mid]) high = mid - 1;
		else if (a[mid] < key) low = mid + 1;
		else return 1;
	}
	return 0;
}

int main() {
	//입력
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), compare);

	//처리
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &in);
		printf("%d\n", bs(in));
	}
	return 0;
}*/