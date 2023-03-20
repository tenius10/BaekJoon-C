/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//44ms

int n,m;
int arr[500][500];

typedef struct {
	int r, c;
}Point;
typedef struct {
	int row;  //���� ����
	int col;  //���� ����
	Point points[4];
}Tetromino;

Tetromino blocks[19] = {
	{1, 4, {{0,0}, {0,1}, {0,2}, {0,3}}},
	{4, 1, {{0,0}, {1,0}, {2,0}, {3,0}}},
	{2, 2, {{0,0}, {0,1}, {1,0}, {1,1}}},
	{3, 2, {{0,0}, {1,0}, {2,0}, {2,1}}},
	{2, 3, {{0,2}, {1,0}, {1,1}, {1,2}}},
	{3, 2, {{0,0}, {0,1}, {1,1}, {2,1}}},
	{2, 3, {{0,0}, {0,1}, {0,2}, {1,0}}},
	{3, 2, {{0,1}, {1,1}, {2,0}, {2,1}}},
	{3, 2, {{0,0}, {0,1}, {1,0}, {2,0}}},
	{2, 3, {{0,0}, {1,0}, {1,1}, {1,2}}},
	{2, 3, {{0,0}, {0,1}, {0,2}, {1,2}}},
	{3, 2, {{0,0}, {1,0}, {1,1}, {2,1}}},
	{2, 3, {{0,1}, {0,2}, {1,0}, {1,1}}},
	{3, 2, {{0,1}, {1,0}, {1,1}, {2,0}}},
	{2, 3, {{0,0}, {0,1}, {1,1}, {1,2}}},
	{2, 3, {{0,1}, {1,0}, {1,1}, {1,2}}},
	{3, 2, {{0,0}, {1,0}, {1,1}, {2,0}}},
	{2, 3, {{0,0}, {0,1}, {0,2}, {1,1}}},
	{3, 2, {{0,1}, {1,0}, {1,1}, {2,1}}}
};

int main() {
	//�Է�
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &arr[i][j]);

	//ó��
	int max=0;
	int sum;
	int nr, nc;
	for (int blockIndex = 0; blockIndex < 19; blockIndex++) {
		int row = blocks[blockIndex].row;
		int col = blocks[blockIndex].col;
		for (int r = 0; r < n - row + 1; r++) {
			for (int c = 0; c < m - col + 1; c++) {
				sum = 0;
				for (int i = 0; i < 4; i++) {
					nr = r + blocks[blockIndex].points[i].r;
					nc = c + blocks[blockIndex].points[i].c;
					sum += arr[nr][nc];
				}
				if (sum > max) max = sum;
			}
		}
	}

	//���
	printf("%d", max);
	return 0;
}*/