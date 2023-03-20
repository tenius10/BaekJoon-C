/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

//내가 쓴 코드(152ms)

int min=INT_MAX;
int data[20][20];
int teamA[20]={0,};
int teamB[20]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
int n;

int main() {
	//입력
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &data[i][j]);
		}
	}

	//처리
	backTracking(0, -1);

	//출력
	printf("%d", min);
	return 0;
}

int backTracking(int step, int preIndex) {
	if (step >= n / 2) {
		if (calc(0, 0) < min) min = calc(0, 0);
		return;
	}
	for (int i = preIndex+1; i < n; i++) {
		teamA[i] = 1;
		teamB[i] = 0;
		backTracking(step + 1,i);
		teamA[i] = 0;
		teamB[i] = 1;
	}
}

int calc() {
	int a = 0;
	for (int i = 0; i < n-1 ; i++) {
		if (teamA[i] == 1) {
			for (int j = i + 1; j < n; j++) {
				if (teamA[j] == 1) {
					a = a + data[i][j] + data[j][i];
				}
			}
		}
	}
	int b = 0;
	for (int i = 0; i < n - 1; i++) {
		if (teamB[i] == 1) {
			for (int j = i + 1; j < n; j++) {
				if (teamB[j] == 1) {
					b = b + data[i][j] + data[j][i];
				}
			}
		}
	}
	return a > b ? a - b : b - a;
}*/