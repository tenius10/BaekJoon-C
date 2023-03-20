/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, u, lu_r, lu_c, v, lv_r, lv_c, t = 0, dr[2] = { 1,0 }, dc[2] = { 0,1 }, end;
char s[27], board[9][10], domino[9][9], combi[9][9], visited_row[9][9], visited_col[9][9], visited_block[9][9];

//스도쿠를 맞춰놓은 상태에서 도미노 조합까지 맞춰보기
void bt_domino(char step, char r, char c) {
	if (end) return;
	if (step == 36 - n) {
		end = 1;
		printf("Puzzle %d\n",t);
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) board[i][j] += 48;
			board[i][9] = '\0';
			printf("%s\n", board[i]);
		}
		return;
	}
	if (c == 9) {
		bt_domino(step, r + 1, 0);
		return;
	}
	if (r == 9) return;

	if (domino[r][c]) bt_domino(step, r, c + 1);
	else {
		for (int i = 0; i < 2; i++) {
			int nr = r + dr[i]; int nc = c + dc[i];
			if (nr<9 && nc<9 &&!domino[nr][nc] && !combi[board[r][c] - 1][board[nr][nc] - 1]) {
				domino[r][c] = domino[nr][nc] = 1;
				combi[board[r][c] - 1][board[nr][nc] - 1] = combi[board[nr][nc] - 1][board[r][c] - 1] = 1;
				bt_domino(step + 1, r, c + 1);
				domino[r][c] = domino[nr][nc] = 0;
				combi[board[r][c] - 1][board[nr][nc] - 1] = combi[board[nr][nc] - 1][board[r][c] - 1] = 0;
			}
		}
	}
}

void bt_sudoku(char r, char c) {
	if (end) return;
	if (c == 9) {
		bt_sudoku(r + 1, 0);
		return;
	}
	if (r == 9) {
		bt_domino(0, 0, 0);
		return;
	}
	if (board[r][c]) bt_sudoku(r, c + 1);
	else {
		for (int i = 0; i < 9; i++) {
			if (!visited_row[r][i] && !visited_col[c][i] && !visited_block[3 * (r / 3) + (c / 3)][i]) {
				visited_row[r][i] = visited_col[c][i] = visited_block[3 * (r / 3) + (c / 3)][i] = 1;
				board[r][c] = i + 1;
				bt_sudoku(r, c + 1);
				visited_row[r][i] = visited_col[c][i] = visited_block[3 * (r / 3) + (c / 3)][i] = board[r][c] = 0;
			}
		}
	}
}

int main() {
	while (1) {
		scanf("%d", &n); getchar();
		if (n == 0) break;
		t++;
		end = 0;
		for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) board[i][j] = domino[i][j] = combi[i][j] = visited_row[i][j] = visited_col[i][j] = visited_block[i][j] = 0;
		for (int i = 0; i < n; i++) {
			gets(s);
			u = s[0] - 48, v = s[5] - 48, lu_r= s[2] - 65, lu_c= s[3] - 49, lv_r= s[7] - 65, lv_c= s[8] - 49;
			board[lu_r][lu_c] = u;
			board[lv_r][lv_c] = v;
			domino[lu_r][lu_c] = domino[lv_r][lv_c] = 1;
			combi[u-1][v-1] = combi[v - 1][u - 1] = 1;
			visited_row[lu_r][u - 1] = 1;
			visited_row[lv_r][v - 1] = 1;
			visited_col[lu_c][u - 1] = 1;
			visited_col[lv_c][v - 1] = 1;
			visited_block[3 * (lu_r / 3) + (lu_c / 3)][u - 1] = 1;
			visited_block[3 * (lv_r / 3) + (lv_c / 3)][v - 1] = 1;
		}
		gets(s);
		for (int i = 0; i <9; i++) {
			board[s[3 * i] - 65][s[3 * i+1] - 49] = i + 1;
			domino[s[3 * i] - 65][s[3 * i + 1] - 49] = 1;
			visited_row[s[3 * i] - 65][i] = 1;
			visited_col[s[3 * i + 1] - 49][i] = 1;
			visited_block[3 * ((s[3 * i] - 65) / 3) + ((s[3 * i + 1] - 49) / 3)][i] = 1;
		}
		bt_sudoku(0, 0);
	}
	return 0;
}*/