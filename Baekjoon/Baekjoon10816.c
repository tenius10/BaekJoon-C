/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct {
	int num;
	int count;
}number;
int size = 0;

int compare_int(const void* first, const void* second) {
	int* a = (int*)first;
	int* b = (int*)second;
	if (*a < *b) return -1;
	else if (*a == *b) return 0;
	else return 1;
}

int compare(const void* first, const void* second) {
	number* a = (number*)first;
	number* b = (number*)second;
	if (a->num < b->num) return -1;
	else if (a->num == b->num) return 0;
	else return 1;
}
int binarySearch(number* arr, int n, int key) {
	int low = 0, high = n - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid].num == key) return mid;
		else if (arr[mid].num < key) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}

int main() {
	int n, m;
	scanf("%d", &n);
	int* nArr = (int*)malloc(sizeof(int) * n);
	number* arr = (number*)malloc(sizeof(number) * n);
	for (int i = 0; i < n; i++) scanf("%d", &nArr[i]);
	qsort(nArr, n, sizeof(nArr[0]), compare_int);

	int tempIndex = 0;
	while (tempIndex < n) {
		int curNum = nArr[tempIndex];
		int index = binarySearch(arr, size, curNum);
		int tempCount = 0;
		while (nArr[tempIndex] == curNum) {
			tempCount++; tempIndex++;
		}
		arr[size].num = curNum;
		arr[size].count = tempCount;
		size++;
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int in; scanf("%d", &in);
		int count = 0;

		//정렬된 값들 중 가장 앞의 숫자의 인덱스를 주는게 아님. 
		//1 1 1 2 2 2 이렇게 있으면 1의 인덱스를 구할 때 2를 줌.
		int index = binarySearch(arr, size, in);  
		if(index==-1) printf("%d ", 0);
		else printf("%d ", arr[index].count);
		
	}
	free(nArr);
	free(arr);
	return 0;
}*/