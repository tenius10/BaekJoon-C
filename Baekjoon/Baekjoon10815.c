/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int binarySearch(int* arr, int n, int key) {
	int low = 0;
	int high = n - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] == key) return 1;
		else if (arr[mid] < key) low = mid + 1; 
		else high = mid - 1;
	}
	return 0;
}
int compare(const void* first, const void* second) {
	int* a = (int*)first;
	int* b = (int*)second;
	if (*a < *b) return -1;
	else if (*a == *b) return 0;
	else return 1;
}
int main() {
	int n; scanf("%d", &n);
	int* arr=(int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr,n,sizeof(arr[0]),compare);
	int m; scanf("%d", &m);
	int in;
	for (int i = 0; i < m; i++) {
		scanf("%d", &in);
		printf("%d ", binarySearch(arr, n, in));
	}
	free(arr);
	return 0;
}*/