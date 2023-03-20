/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int a, b;
int A[200000];
int compare(const void* f, const void* s) {
	int* a = (int*)f;
	int* b = (int*)s;
	if (*a < *b) return -1;
	else if (*a > *b) return 1;
	else return 0;
}
int bs(int key) {
	int low = 0; int high = a - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (A[mid] == key) return 1;
		else if (A[mid] < key) low = mid + 1;
		else high = mid - 1;
	}
	return 0;
}
int main() {
	 scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		scanf("%d", &A[i]);
	}
	qsort(A, a, sizeof(A[0]), compare);
	int intersectionCount = 0;  //±³ÁýÇÕ
	for (int i = 0; i < b; i++) {
		int in; scanf("%d", &in);
		if (bs(in)) intersectionCount++;
	}
	printf("%d", a + b - 2 * intersectionCount);
	return 0;
}*/