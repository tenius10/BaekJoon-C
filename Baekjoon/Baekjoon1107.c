/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//0ms

int n, n_len, n_arr[6], result = 499900;
int m, input, possible[10] = { 1,1,1,1,1,1,1,1,1,1 };
int nums[6] = { 0, };

int abs(int a) { return a > 0 ? a : -a; }
int min(int a, int b) { return a < b ? a : b; }
int pow(int a, int n) {
	int result = 1;
	for (int i = 0; i < n; i++) result *= a;
	return result;
}

void numToArr(int n) {
	n_len = 0;
	do { n_arr[5 - (n_len++)] = n % 10; } while (n /= 10);
}
int arrToNum(int len) {
	int result = 0;
	for (int i = 0, multi = pow(10, n_len - 1); i < len; i++, multi /= 10) result += (multi * nums[6 - n_len + i]);
	return result;
}

void bt(int step) {
	if (step == n_len) {
		while (!nums[6 - step] && step > 1) { step--; }
		result = min(result, step + abs(n - arrToNum(n_len)));
		return;
	}

	//현재 칸에 어떤 수를 채워 넣어야 n과의 차가 가장 작아지는지 구하기
	int num = n_arr[6 - n_len + step];
	int diff_min = 500000;
	for (int i = 0; i < 10; i++) {
		nums[6 - n_len + step] = i;
		if (possible[i] || (!(arrToNum(step + 1)) && step < n_len - 1)) diff_min = min(diff_min, abs(n - n % pow(10, n_len - 1 - step) - arrToNum(step + 1)));
	}

	for (int i = 0; i < 10; i++) {
		nums[6 - n_len + step] = i;
		if (possible[i] || (!(arrToNum(step + 1)) && step < n_len - 1)) {
			if (abs(n - n % pow(10, n_len - 1 - step) - arrToNum(step + 1)) >= 0 && abs(n - n % pow(10, n_len - 1 - step) - arrToNum(step + 1)) <= diff_min + pow(10, n_len - 1 - step)) bt(step + 1);
		}
	}
}

int getSmallValue() {
	int minNum;
	for (int i = 0; i < 6; i++) nums[i] = 0;
	for (int i = 0; i < 10; i++) if (possible[i]) { minNum = i; break; }
	for (int i = 6 - n_len; i < 6; i++) nums[i] = minNum;
	if (!nums[6 - n_len]) for (int i = 1; i < 10; i++) if (possible[i]) { nums[6 - n_len] = i; break; }
	return arrToNum(n_len);
}

int main() {
	//입력
	scanf("%d %d", &n, &m);
	numToArr(n);
	for (int i = 0; i < m; i++) {
		scanf("%d", &input);
		possible[input] = 0;
	}

	//처리
	if (m != 10) {
		bt(0);
		if (n_len < 6) {
			n_len++;
			result = min(result, abs(getSmallValue(n_len) - n) + n_len);
		}
	}

	//출력
	printf("%d", min(abs(n - 100), result));
	return 0;
}*/