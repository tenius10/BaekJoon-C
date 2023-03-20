/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//왜인지는 모르겠는데 이 코드 실행하고 나면 가끔 쓰기용으로 열 수 없다면서 정상 코드도 실행이 안 될 때가 있음.
//그때는 컴퓨터 자체를 다시 시작해줘야 함.

int n, buff_idx = 1 << 20, dp_idx = 0, dp[2188][2188][2] = { 0, }, minus = 0, zero = 0, plus = 0, cnt_zero, cnt_plus, cnt_input = 0;
char buff[1 << 20], ch, before = 0;

void dac(int r, int c, int len) {
	cnt_zero = dp[r + len - 1][c + len - 1][0] - dp[r - 1][c + len - 1][0] - dp[r + len - 1][c - 1][0] + dp[r - 1][c - 1][0];
	cnt_plus = dp[r + len - 1][c + len - 1][1] - dp[r - 1][c + len - 1][1] - dp[r + len - 1][c - 1][1] + dp[r - 1][c - 1][1];
	if (cnt_zero + cnt_plus == 0) minus++;
	else if (cnt_plus == len * len) plus++;
	else if (cnt_zero == len * len) zero++;
	else {
		dac(r, c, len / 3);
		dac(r, c + len / 3, len / 3);
		dac(r, c + 2 * len / 3, len / 3);
		dac(r + len / 3, c, len / 3);
		dac(r + len / 3, c + len / 3, len / 3);
		dac(r + len / 3, c + 2 * len / 3, len / 3);
		dac(r + 2 * len / 3, c, len / 3);
		dac(r + 2 * len / 3, c + len / 3, len / 3);
		dac(r + 2 * len / 3, c + 2 * len / 3, len / 3);
	}
}

char getChar() {
	if (buff_idx == 1 << 20) {
		fread(buff, sizeof(char), 1 << 20, stdin);
		buff_idx = 0;
	}
	return buff[buff_idx++];
}

void input() {
	while (cnt_input < n * n) {
		ch = getChar();
		if (ch != '0' && ch != '1' && ch != '-') continue;
		if (ch == '-') {
			before = '-';
			continue;
		}
		if (ch == '1' && before != '-') dp[1 + dp_idx / n][1 + dp_idx % n][1] = 1;
		else if (ch == '0') dp[1 + dp_idx / n][1 + dp_idx % n][0] = 1;

		dp[1 + dp_idx / n][1 + dp_idx % n][0] += dp[dp_idx / n][1 + dp_idx % n][0] + dp[1 + dp_idx / n][dp_idx % n][0] - dp[dp_idx / n][dp_idx % n][0];
		dp[1 + dp_idx / n][1 + dp_idx % n][1] += dp[dp_idx / n][1 + dp_idx % n][1] + dp[1 + dp_idx / n][dp_idx % n][1] - dp[dp_idx / n][dp_idx % n][1];

		before = ch;
		cnt_input++;
		dp_idx++;
	}
}

int main() {
	scanf("%d", &n);
	input();
	dac(1, 1, n);
	printf("%d\n%d\n%d", minus, zero, plus);
	return 0;
}*/