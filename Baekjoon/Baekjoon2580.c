/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arr[9][9], row[9][10] = { 0, }, col[10][9] = { 0, }, block[9][10] = { 0, }, blank_count = 0, end = 0, blank[81][2];

void bt(int fill_count) {
	if (fill_count == blank_count) {
		for (int i = 0; i < 9; i++) { for (int j = 0; j < 9; j++) printf("%d ", arr[i][j]); printf("\n"); }
		end = 1;
		return;
	}
	int r = blank[fill_count][0];
	int c = blank[fill_count][1];
	if (!arr[r][c]) {
		for (int k = 1; k <= 9; k++) {
			if (!row[r][k] && !col[c][k] && !block[(r / 3) * 3 + (c / 3)][k]) {
				row[r][k] = col[c][k] = block[(r / 3) * 3 + (c / 3)][k] = 1;
				arr[r][c] = k;
				bt(fill_count + 1);
				if (end) return;
				row[r][k] = col[c][k] = block[(r / 3) * 3 + (c / 3)][k] = arr[r][c] = 0;
			}
		}
	}
}

int main() {
	//입력
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j]) {
				row[i][arr[i][j]] = 1;
				col[j][arr[i][j]] = 1;
				block[(i / 3) * 3 + (j / 3)][arr[i][j]] = 1;
			}
			else {
				blank[blank_count][0] = i;
				blank[blank_count][1] = j;
				blank_count++;
			}
		}
	}

	//처리
	bt(0);
	return 0;
}*/