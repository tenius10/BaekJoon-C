/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//���� ���� (���ؿ��� �ð� �ʰ� ��.)
//���� ������ �ּ��� ���� �־��� ����� �ð� ���⵵�� O(nlogn)���� ����.
void ageSort(int* ageArr, char** nameArr, int low, int high, int n) {
	if (low >= high) return;
	int mid = (low + high) / 2;
	ageSort(ageArr, nameArr, low, mid,n);
	ageSort(ageArr, nameArr, mid+1, high,n);
	int i = low; int j = mid + 1;
	int tempIndex = low;
	int* tempArr = (int*)malloc(sizeof(int) * n);
	char** tempNameArr = (char**)malloc(sizeof(char*) * n);
	for (int k = 0; k < n; k++) {
		tempNameArr[k] = (char*)malloc(sizeof(char) * 101);
	}
	while (tempIndex <= high) {
		if (i > mid) {
			tempArr[tempIndex] = ageArr[j];
			strcpy(tempNameArr[tempIndex], nameArr[j]);
			j++; tempIndex++;
		}
		else if (j > high) {
			tempArr[tempIndex] = ageArr[i];
			strcpy(tempNameArr[tempIndex], nameArr[i]);
			i++; tempIndex++;
		}
		else if (ageArr[i] <= ageArr[j]) {
			tempArr[tempIndex] = ageArr[i];
			strcpy(tempNameArr[tempIndex], nameArr[i]);
			i++; tempIndex++;
		}
		else {
			tempArr[tempIndex] = ageArr[j];
			strcpy(tempNameArr[tempIndex], nameArr[j]);
			j++; tempIndex++;
		}
	}
	for (int k = low; k <= high; k++) {
		ageArr[k] = tempArr[k];
		strcpy(nameArr[k] ,tempNameArr[k]);
	}

	free(tempArr);
	for (int k = 0; k < n; k++) {
		free(tempNameArr[k]);
	}
	free(tempNameArr);
}

int main() {
	//�Է�
	int n; scanf("%d", &n);
	int* ageArr = (int*)malloc(sizeof(int) * n);
	char** nameArr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		nameArr[i] = (char*)malloc(sizeof(char) * 101);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &ageArr[i], nameArr[i]);
	}

	//ó��
	ageSort(ageArr, nameArr, 0, n - 1, n);

	//���
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", ageArr[i], nameArr[i]);
	}

	//����
	free(ageArr);
	for (int i = 0; i < n; i++) {
		free(nameArr[i]);
	}
	free(nameArr);
	return 0;
}*/