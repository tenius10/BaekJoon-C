/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//왜 안 되는거지 ㅠㅠ

int m, n;
char arr[50][51];
int result = 2500;

int min(int a, int b) { return a < b ? a : b; }

void findMin(int r, int c) {
	int count_w = 0;
	int count_b = 0;
	for (int i = r; i < r + 8; i++) {
		//첫 칸이랑 같은 색이어야 하는 칸
		for (int j = c + (i % 2 == r % 2) ? 0 : 1; j < c + 8; j+=2) {
			if (arr[i][j] == 'W') count_b++;
			else count_w++;
		}

		//첫 칸이랑 다른 색이어야 하는 칸
		for (int j = c + (i % 2 == r % 2) ? 1 : 0; j < c + 8; j+=2) {
			if (arr[i][j] == 'W') count_w++;
			else count_b++;
		}
	}
	result = min(result, min(count_w, count_b));
}

int main(void) {
	//입력
	scanf("%d %d\n", &m, &n);
	for (int i = 0; i < m; i++) scanf("%s", arr[i]);
	
	//처리
	for (int i = 0; i < m - 7; i++) {
		for (int j = 0; j < n - 7; j++) {
			findMin(i, j);
		}
	}

	//출력
	printf("%d", result);
	return 0;
}*/