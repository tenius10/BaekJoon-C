/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//병합 정렬 (백준에서 시간 초과 뜸.)
//병합 정렬은 최선의 경우와 최악의 경우의 시간 복잡도가 O(nlogn)으로 같다.
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
	//입력
	int n; scanf("%d", &n);
	int* ageArr = (int*)malloc(sizeof(int) * n);
	char** nameArr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		nameArr[i] = (char*)malloc(sizeof(char) * 101);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &ageArr[i], nameArr[i]);
	}

	//처리
	ageSort(ageArr, nameArr, 0, n - 1, n);

	//출력
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", ageArr[i], nameArr[i]);
	}

	//해제
	free(ageArr);
	for (int i = 0; i < n; i++) {
		free(nameArr[i]);
	}
	free(nameArr);
	return 0;
}*/