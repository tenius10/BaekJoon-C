/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int compare(const void* first, const void* second) {
	int* a = (int*)first;
	int* b = (int*)second;
	if (*a < *b) return -1;
	else if (*a > *b) return 1;
	return 0;
}

int binarySearch(int* arr, int low, int high, int target) {
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) return mid;
		if (arr[mid] > target) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}

int main() {
	//�Է�
	int n; scanf("%d", &n);
	int* input = (int*)malloc(sizeof(int) * n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
		arr[i] = input[i];
	}

	//�ߺ� ���ְ� �� ���� �� �ε����� Ǯ��
	qsort(arr, n, sizeof(arr[0]), compare);
	int* freq = (int*)malloc(sizeof(int) * n);  //�����ϰ� �ߺ����� �迭
	int before=-1;
	int tempIndex = 0;  //�Ʒ��� for���� ������ freq�� ���Ұ� ���� ������ �ȴ�.
	for (int i = 0; i < n; i++) {
		if (before != arr[i]) {
			freq[tempIndex++] = arr[i];
			before = arr[i];
		}
	}
	//������ ��ǥ���� ����Ž������ �ε��� ã��(�׳� �տ������� ã�� ���� �˻��� O(n^2)�ε�
	//���� Ž���� �ð����⵵�� O(logn)
	//��ħ ���ĵ� �������� �� �� �ִ�.
	for (int i = 0; i < n; i++) {
		printf("%d ", binarySearch(freq,0,tempIndex-1, input[i]));
	}

	//����
	free(input);
	free(arr);
	free(freq);

	//������ 0�� ��ȯ�ؾ� ��.
	return 0;
}*/