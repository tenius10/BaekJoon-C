/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000];
void quickSort(int low, int high)
{
	if (low >= high) return;
	int pivot = arr[high];
	int cur = low;
	for (int i = low; i <= high; i++) {
		if (arr[i] <= pivot) {
			int temp = arr[i];
			arr[i] = arr[cur];
			arr[cur++] = temp;
		}
	}
	cur--;
	quickSort(low, cur-1);
	quickSort(cur+1, high);
}
int main() {
	int n, k; scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	quickSort(0,n-1);
	printf("%d", arr[n-k]);
	return 0;
}*/