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
	//입력
	int n; scanf("%d", &n);
	int* input = (int*)malloc(sizeof(int) * n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
		arr[i] = input[i];
	}

	//중복 없애고 퀵 정렬 후 인덱스로 풀기
	qsort(arr, n, sizeof(arr[0]), compare);
	int* freq = (int*)malloc(sizeof(int) * n);  //정렬하고 중복없앤 배열
	int before=-1;
	int tempIndex = 0;  //아래의 for문을 지나면 freq의 원소가 들은 개수가 된다.
	for (int i = 0; i < n; i++) {
		if (before != arr[i]) {
			freq[tempIndex++] = arr[i];
			before = arr[i];
		}
	}
	//압축한 좌표에서 이진탐색으로 인덱스 찾자(그냥 앞에서부터 찾는 선형 검색은 O(n^2)인데
	//이진 탐색의 시간복잡도는 O(logn)
	//마침 정렬도 돼있으니 쓸 수 있다.
	for (int i = 0; i < n; i++) {
		printf("%d ", binarySearch(freq,0,tempIndex-1, input[i]));
	}

	//해제
	free(input);
	free(arr);
	free(freq);

	//백준은 0을 반환해야 함.
	return 0;
}*/