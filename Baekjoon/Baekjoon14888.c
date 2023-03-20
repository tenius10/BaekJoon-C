/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

void re(int step);
int calc();

int num[11];
int op[10];  //0은 더하기, 1은 빼기, 2는 곱하기, 3은 나누기
int isVisited[10];
int selectOP[10];  //실제로는 n-1개만 씀.

int n;
int min = INT_MAX;
int max = INT_MIN;

int main() {
	//입력
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &num[i]);
	int opIndex = 0;
	for (int i = 0; i < 4; i++) {
		int temp;
		scanf("%d", &temp);
		for (int j = 0; j < temp; j++) {
			op[opIndex++] = i;
		}
	}
	//처리
	re(0);

	//출력
	printf("%d\n%d", max, min);
	return 0;
}

void re(int step) {
	//1. 종료조건
	if (step == n - 1) {
		int temp = calc();
		if (temp > max) max = temp;
		if (temp < min) min = temp;
		return;
	}

	//2. 처리
	//연산자 고르기
	int curOP;
	for (int i = 0; i < n - 1; i++) {
		if (!isVisited[i]) {
			selectOP[step] = op[i];
			isVisited[i] = 1;
			re(step + 1);
			isVisited[i] = 0;
		}
	}

}
//연산자 배열 주면 순서대로 계산해서 반환
int calc() {
	int result = num[0];
	for (int i = 0; i < n - 1; i++) {
		switch (selectOP[i]) {
		case 0:
			result = result + num[i + 1];
			break;
		case 1:
			result = result - num[i + 1];
			break;
		case 2:
			result = result * num[i + 1];
			break;
		case 3:
			if (result > 0) {
				result = result / num[i + 1];
			}
			else {
				result = -(-result / num[i + 1]);
			}
		}
	}

	return result;
}*/