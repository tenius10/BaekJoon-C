/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int n, k, *arr, * temp, result, count=0;

void merge(int low, int high, int k) {
	int mid=(low+high)/2, cur = low, a = low, b = mid + 1;
	while (a <= mid && b <= high && count!=k) {
		if (arr[a] < arr[b]) temp[cur++] = arr[a++];
		else temp[cur++] = arr[b++];
		count++;
	}
	while (a <= mid && count != k) {
		temp[cur++] = arr[a++];
		count++;
	}
	while (b <= high && count != k) {
		temp[cur++] = arr[b++];
		count++;
	}
	result = temp[cur-1];
	for (int i = low; i <= high; i++) arr[i] = temp[i];
}
void merge_sort(int low, int high, int k) {
	int mid = (low + high) / 2;
	if (low < high) {
		merge_sort(low, mid, k);
		merge_sort(mid + 1, high, k);
		if (count == k) return;
		merge(low, high, k);
	}
}

int main() {
	scanf("%d %d", &n, &k);
	arr = (int*)malloc(sizeof(int) * n);
	temp = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	merge_sort(0, n - 1, k);

	if (count < k) printf("-1");
	else printf("%d", result);

	free(arr);
	free(temp);
}*/