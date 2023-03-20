/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//백준 10989번 문제 (주어지는 값이 1만보다 작거나 같다고 정해져있어서 입력과 동시에 count함)

int main() {
	//입력
	int n; scanf("%d", &n);
	int arr[10001]={0,};  //10000보다 작거나 같으니까
	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num]++;
	}

	//출력
	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	//해제
	return 0;
}*/