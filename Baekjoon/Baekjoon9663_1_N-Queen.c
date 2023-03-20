/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

// N-Queen 문제 (첫번째 방식 : 다른 코드 참고없이 처음에 적은 코드) (8112ms)


//n*n체스판에 퀸이 n개니까 스도쿠처럼 각 행,열,대각선 상에 본인만 있게 됨.
//count : 현재 놓은 퀸의 개수
//curRow : 현재 채우는 중인 행
void backTracking(int n, int board[15][15], int* result, int curRow) {
	//종료조건
	if (curRow >= n) {
		*result = *result + 1;
		return;
	}
	int temp[15][15] = { {0,}, };
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) temp[i][j] = board[i][j];

	//열 하나씩 확인해보기(행은 curRow로 고정)
	for (int col = 0; col < n; col++) {
		if (board[curRow][col] == 0) {
			//행과 열 채우기
			for (int i = 0; i < n; i++) {
				board[curRow][i] = 1;
				board[i][col] = 1;
			}
			//대각선
			int tempRow = curRow;
			int tempCol = col;
			while (tempRow >= 0 && tempCol >= 0) board[tempRow--][tempCol--] = 1;
			tempRow = curRow; tempCol = col;
			while (tempRow < n && tempCol < n) board[tempRow++][tempCol++] = 1;
			tempRow = curRow; tempCol = col;
			while (tempRow < n && tempCol < n) board[tempRow++][tempCol++] = 1;
			//역대각선
			tempRow = curRow; tempCol = col;
			while (tempRow >= 0 && tempCol < n) board[tempRow--][tempCol++] = 1;
			tempRow = curRow; tempCol = col;
			while (tempRow < n && tempCol >= 0) board[tempRow++][tempCol--] = 1;

			backTracking(n, board, result, curRow + 1);

			//백트래킹의 핵심인 이전 상태로 돌아가는 연산은 재귀에서 빠져나온 직후에 하자
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