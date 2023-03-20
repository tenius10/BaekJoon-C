/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void shellSort(int*, int);
void intervalSort(int*, int, int, int);

int main() {
	//입력
	int n; scanf("%d", &n);
	int* data = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}

	//처리
	shellSort(data, n);

	//출력
	for (int i = 0; i < n; i++) {
		printf("%d\n", data[i]);
	}
}

void shellSort(int* data, int size) {
	int i,  interval;
	interval = size / 2;
	while (interval >= 1) {
		for (i = 0; i < interval; i++) intervalSort(data, i, size - 1, interval);
		interval /= 2;
	}
}
void intervalSort(int* data, int begin, int end, int interval) {
	int item;
	int i,j;
	for (i = begin + interval; i <= end; i += interval) {
		item = data[i];
		for (j = i - interval; j >= begin && item < data[j]; j -= interval) {
			data[j + interval] = data[j];
		}
		data[j + interval] = item;
	}
}*/