/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

// N-Queen ���� (ù��° ��� : �ٸ� �ڵ� ������� ó���� ���� �ڵ�) (8112ms)


//n*nü���ǿ� ���� n���ϱ� ������ó�� �� ��,��,�밢�� �� ���θ� �ְ� ��.
//count : ���� ���� ���� ����
//curRow : ���� ä��� ���� ��
void backTracking(int n, int board[15][15], int* result, int curRow) {
	//��������
	if (curRow >= n) {
		*result = *result + 1;
		return;
	}
	int temp[15][15] = { {0,}, };
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) temp[i][j] = board[i][j];

	//�� �ϳ��� Ȯ���غ���(���� curRow�� ����)
	for (int col = 0; col < n; col++) {
		if (board[curRow][col] == 0) {
			//��� �� ä���
			for (int i = 0; i < n; i++) {
				board[curRow][i] = 1;
				board[i][col] = 1;
			}
			//�밢��
			int tempRow = curRow;
			int tempCol = col;
			while (tempRow >= 0 && tempCol >= 0) board[tempRow--][tempCol--] = 1;
			tempRow = curRow; tempCol = col;
			while (tempRow < n && tempCol < n) board[tempRow++][tempCol++] = 1;
			tempRow = curRow; tempCol = col;
			while (tempRow < n && tempCol < n) board[tempRow++][tempCol++] = 1;
			//���밢��
			tempRow = curRow; tempCol = col;
			while (tempRow >= 0 && tempCol < n) board[tempRow--][tempCol++] = 1;
			tempRow = curRow; tempCol = col;
			while (tempRow < n && tempCol >= 0) board[tempRow++][tempCol--] = 1;

			backTracking(n, board, result, curRow + 1);

			//��Ʈ��ŷ�� �ٽ��� ���� ���·� ���ư��� ������ ��Ϳ��� �������� ���Ŀ� ����
			for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) board[i][j] = temp[i][j];
		}
	}
}

int main() {
	int n; scanf("%d", &n);
	int board[15][15] = { {0,}, };
	int result = 0;
	backTracking(n, board, &result, 0);  //n, board, result, curRow
	printf("%d", result);
	return 0;
}*/