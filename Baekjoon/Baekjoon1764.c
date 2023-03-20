/*#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef char string[21];

int compare(const void* f, const void* s) {
	string* a = (string*)f;
	string* b = (string*)s;
	if (strcmp(*a, *b) < 0) return -1;
	else if (strcmp(*a, *b)==0) return 0;
	else return 1;
}
int compare_int(const void* first, const void* second) {
	int* a = (int*)first;
	int* b = (int*)second;
	if (*a < *b) return -1;
	else if (*a == *b) return 0;
	else return 1;
}
int binarySearch(string* arr, int n, string key) {
	int low = 0; int high = n - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(arr[mid], key) == 0) return mid;
		else if (strcmp(arr[mid], key) < 0) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}
int main() {
	int n, m; scanf("%d %d", &n,&m);
	string* arr = (string*)malloc(sizeof(string) * n);
	for (int i = 0; i < n; i++) scanf("%s", arr[i]);
	qsort(arr, n, sizeof(arr[0]), compare);
	
	int size = 0;
	int smaller = (n > m) ? m : n;
	int* resultIndex = (int*)malloc(sizeof(int) * smaller);
	for (int i = 0; i < m; i++) {
		string in; scanf("%s", in);
		int index = binarySearch(arr, n, in);
		if ( index !=-1) {
			resultIndex[size++] = index;
		}
	}
	qsort(resultIndex, size, sizeof(resultIndex[0]), compare_int);
	printf("%d\n", size);
	for (int i = 0; i < size; i++) printf("%s\n", arr[resultIndex[i]]);
	
	free(arr);
	free(resultIndex);
	return 0;
}*/