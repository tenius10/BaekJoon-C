/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


//나는 매개변수로 tempArr를 왜 넘기는 건지 이유를 모르겠어서
//넘기지 않았는데 생각해보니 이렇게 되면 재귀함수의 깊이가 깊어질수록
//필요한 메모리가 커지겠네. tempArr의 해제는 함수를 나오면서 하니까 함수의 끝으로
//들어가기 전까지는 해제를 못 시킨다.
//나중에 시간 되면 tempArr를 매개변수로 넘기는 방식으로 다시 구현하자.
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