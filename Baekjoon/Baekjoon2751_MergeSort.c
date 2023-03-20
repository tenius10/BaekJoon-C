/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


//���� �Ű������� tempArr�� �� �ѱ�� ���� ������ �𸣰ھ
//�ѱ��� �ʾҴµ� �����غ��� �̷��� �Ǹ� ����Լ��� ���̰� ���������
//�ʿ��� �޸𸮰� Ŀ���ڳ�. tempArr�� ������ �Լ��� �����鼭 �ϴϱ� �Լ��� ������
//���� �������� ������ �� ��Ų��.
//���߿� �ð� �Ǹ� tempArr�� �Ű������� �ѱ�� ������� �ٽ� ��������.
void mergeSort(int* arr, int low, int high, int n) {
	//���� ����
	if (low >= high) return;

	//����
	int mid = (low + high) / 2;

	//����
	mergeSort(arr, low, mid, n);
	mergeSort(arr, mid + 1, high, n);

	//�պ�
	int i = low;
	int j = mid + 1;
	int tempIndex = low;
	int* tempArr = (int*)malloc(sizeof(int) * n);
	while (tempIndex <= high) {
		if (i > mid) tempArr[tempIndex] = arr[j++];
		else if (j > high) tempArr[tempIndex] = arr[i++];
		else if (arr[i] <= arr[j]) tempArr[tempIndex] = arr[i++];
		else tempArr[tempIndex] = arr[j++];
		tempIndex++;
	}

	//����
	for (int k = low; k <= high; k++) {
		arr[k] = tempArr[k];
	}

	free(tempArr);
}

int main() {
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &(arr[i]));
	}

	mergeSort(arr, 0, n - 1, n);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	free(arr);
}*/