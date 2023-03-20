/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m, k, a[51][51], arr[51][51], rotation[6][3], result = 5000, order[6], visited[6] = { 0, }, temp, r, c, s, s_r, s_c, e_r, e_c;

int min(int a, int b) { return a < b ? a : b; }
int getMinA() {
	//회전 연산 수행 후
	for (int i = 0; i < k; i++) {
		r = rotation[order[i]][0], c = rotation[order[i]][1], s = rotation[order[i]][2];
		s_r = r - s, s_c = c - s, e_r = r + s, e_c = c + s;
		while (e_r - s_r >= 2 && e_c - s_c >= 2) {
			temp = arr[s_r][s_c];
			for (int j = s_r; j < e_r; j++) arr[j][s_c] = arr[j + 1][s_c];
			for (int j = s_c; j < e_c; j++) arr[e_r][j] = arr[e_r][j + 1];
			for (int j = e_r; j > s_r; j--) arr[j][e_c] = arr[j - 1][e_c];
			for (int j = e_c; j > s_c; j--) arr[s_r][j] = arr[s_r][j - 1];
			arr[s_r][s_c + 1] = temp;

			s_r++; s_c++; e_r--; e_c--;
		}
	}

	//배열 a의 값 중 최솟값 구하면서 배열 초기화
	int result = 5000;
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j <= m; j++) { sum += arr[i][j]; arr[i][j] = a[i][j]; }
		result = min(result, sum);
	}

	//리턴
	return result;
}

void bt(int step) {
	if (step == k) {
		result = min(result, getMinA());
		return;
	}
	for (int i = 0; i < k; i++) {
		if (!visited[i]) {
			order[step] = i;
			visited[i] = 1;
			bt(step + 1);
			visited[i] = 0;
		}
	}
}

int main() {
	//입력
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) { scanf("%d", &a[i][j]); arr[i][j] = a[i][j]; }
	for (int i = 0; i < k; i++) scanf("%d %d %d", &rotation[i][0], &rotation[i][1], &rotation[i][2]);
	
	//처리
	bt(0);

	//출력
	printf("%d", result);
	return 0;
}*/