/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <limits.h>
#include <math.h>

void mergeSort(int* arr, int low, int high, int n) {
	//종료 조건
	if (low >= high) return;

	//분할
	int mid = (low + high) / 2;

	//정복
	mergeSort(arr, low, mid, n);
	mergeSort(arr, mid + 1, high, n);

	//합병
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

	//복사
	for (int k = low; k <= high; k++) {
		arr[k] = tempArr[k];
	}

	free(tempArr);
}

int main() {
	//입력
	int n; scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);

	int sum = 0;
	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	//산술평균 구하기
	printf("%d\n", (int)round((double)sum/n));  //소수점 첫째 자리에서 반올림(즉 소수점 떼고 출력)

	//중앙값 구하기
	mergeSort(arr, 0, n - 1, n);
	printf("%d\n", arr[n / 2]);

	//최빈값 구하기
	int* freqArr = (int*)malloc(sizeof(int) * 8001);
	for (int i = 0; i < 8001; i++) {
		freqArr[i]=0;
	}
	for (int i = 0; i < n; i++) {
		freqArr[arr[i] + 4000]++;
	}

	int maxFreq = 0;  //최빈값의 빈도수
	int count = 0;
	int firstSmallerFreq = 0;
	int secondSmallerFreq = 0;
	for (int i = 0; i < 8001; i++) {
		if (freqArr[i] > maxFreq) maxFreq = freqArr[i];
	}
	for (int i = 0; i < 8001; i++) {
		if (freqArr[i] == maxFreq) {
			count++;
			if (count == 1) {
				firstSmallerFreq = i;
			}
			if (count == 2) {
				secondSmallerFreq = i;
			}
		}
	}
	if (count >= 2) {
		printf("%d\n", secondSmallerFreq - 4000);
	}
	else {
		printf("%d\n", firstSmallerFreq - 4000);
	}

	//범위 구하기
	printf("%d\n", max - min);

	//해제
	free(arr);
	free(freqArr);
	return 0;
}*/