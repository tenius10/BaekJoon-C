/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 5

int A[MAX][MAX], result[MAX][MAX];
int n, input;
long long b;

void multiply_matrix(int a[][MAX], int b[][MAX]) {
	int tmp[MAX][MAX];
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
		int sum = 0;
		for (int k = 0; k < n; k++) sum += a[i][k] * b[k][j];
		tmp[i][j] = sum % 1000;
	}
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) result[i][j] = tmp[i][j];
}

//행렬 A의 expo제곱 (행렬의 결합법칙 이용)
void dac(long long expo) {
	if (expo == 1) return;
	if (expo % 2) {
		dac(expo / 2);  //재귀에서 나왔을 때 result행렬에는 A의 (int)(expo / 2) 제곱이 담김
		multiply_matrix(result, result);  //result행렬에 A의 expo-1 제곱이 담김
		multiply_matrix(result, A);
	}
	else {
		dac(expo / 2);
		multiply_matrix(result, result);
	}
}

int main() {
	scanf("%d %lld", &n, &b);
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
		scanf("%d", &input);
		A[i][j] = result[i][j] = input % 1000;
	}
	dac(b);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) printf("%d ", result[i][j]);
		printf("\n");
	}
	return 0;
}*/