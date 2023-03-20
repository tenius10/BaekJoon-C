/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void coordinateSort(int** arr, int low, int high, int n) {
	//���� ����
	if (low >= high) return;

	//����
	int mid = (low + high) / 2;

	//����
	coordinateSort(arr, low, mid, n);
	coordinateSort(arr, mid + 1, high, n);

	//����
	int** tempArr = (int**)malloc(sizeof(int*) * (high - low + 1));
	for (int k = 0; k < high-low+1; k++) {
		tempArr[k] = (int*)malloc(sizeof(int) * 2);
		tempArr[k][0] = arr[k][0];
		tempArr[k][1] = arr[k][1];
	}

	int tempIndex = 0;
	int i = low;
	int j = mid + 1;

	while (tempIndex < high-low+1) {
		if (i > mid) {
			tempArr[tempIndex][0] = arr[j][0];
			tempArr[tempIndex][1] = arr[j++][1];
		}
		else if (j > high) {
			tempArr[tempIndex][0] = arr[i][0];
			tempArr[tempIndex][1] = arr[i++][1];
		}
		else if (arr[i][0] < arr[j][0]) {
			tempArr[tempIndex][0] = arr[i][0];
			tempArr[tempIndex][1] = arr[i++][1];
		}
		else if (arr[i][0] > arr[j][0]) {
			tempArr[tempIndex][0] = arr[j][0];
			tempArr[tempIndex][1] = arr[j++][1];
		}
		else {
			if (arr[i][1] <= arr[j][1]) {
				tempArr[tempIndex][0] = arr[i][0];
				tempArr[tempIndex][1] = arr[i++][1];
			}
			else {
				tempArr[tempIndex][0] = arr[j][0];
				tempArr[tempIndex][1] = arr[j++][1];
			}
		}
		tempIndex++;
	}

	//����
	int curIndex = 0;
	for (int k = low; k <= high; k++) {
		arr[k][0] = tempArr[curIndex][0];
		arr[k][1] = tempArr[curIndex++][1];
	}

	//����
	for (int k = 0; k < high - low + 1; k++) {
		free(tempArr[k]);
	}
	free(tempArr);
}

int main() {
	//�Է�
	int n; scanf("%d", &n);
	int** arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * 2);
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	//ó��
	coordinateSort(arr, 0, n - 1, n);

	//���
	for (int i = 0; i < n; i++) {
		printf("%d %d\n",arr[i][0], arr[i][1]);
	}

	//����
	for (int k = 0; k <n; k++) {
		free(arr[k]);
	}
	free(arr);
	return 0;
}*/