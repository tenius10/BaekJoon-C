/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, maxLen, index, mid;
int arr[1000];

int bs(int low, int high, int key) {
	//while���� ������ ������ low�� high���� 1 ŭ.
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] > key) high = mid - 1;
		else if (arr[mid] < key) low = mid + 1;
		else return mid;
	}
	return low;
}

int main() {
	//�Է�
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	//ó��
	maxLen = 0;
	for (int i = 1; i < n; i++) {
		index = bs(0, maxLen, arr[i]);
		if (index > maxLen) arr[++maxLen] = arr[i];
		else if (arr[i] < arr[index]) arr[index] = arr[i];
	}

	//���
	printf("%d", maxLen + 1);
	return 0;
}*/