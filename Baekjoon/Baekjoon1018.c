/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�� �� �Ǵ°��� �Ф�

int m, n;
char arr[50][51];
int result = 2500;

int min(int a, int b) { return a < b ? a : b; }

void findMin(int r, int c) {
	int count_w = 0;
	int count_b = 0;
	for (int i = r; i < r + 8; i++) {
		//ù ĭ�̶� ���� ���̾�� �ϴ� ĭ
		for (int j = c + (i % 2 == r % 2) ? 0 : 1; j < c + 8; j+=2) {
			if (arr[i][j] == 'W') count_b++;
			else count_w++;
		}

		//ù ĭ�̶� �ٸ� ���̾�� �ϴ� ĭ
		for (int j = c + (i % 2 == r % 2) ? 1 : 0; j < c + 8; j+=2) {
			if (arr[i][j] == 'W') count_w++;
			else count_b++;
		}
	}
	result = min(result, min(count_w, count_b));
}

int main(void) {
	//�Է�
	scanf("%d %d\n", &m, &n);
	for (int i = 0; i < m; i++) scanf("%s", arr[i]);
	
	//ó��
	for (int i = 0; i < m - 7; i++) {
		for (int j = 0; j < n - 7; j++) {
			findMin(i, j);
		}
	}

	//���
	printf("%d", result);
	return 0;
}*/