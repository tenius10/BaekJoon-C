/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ) �־��� �������� ���� ���������� �ʰ� �����͵� �� (4ms)

int n, s;
int arr[20];
int count = 0;

void dfs(int step, int sum) {
	if (step == n) {
		if (sum == s) count++;
		return;
	}

	dfs(step + 1, sum + arr[step]);
	dfs(step + 1, sum);
}

int main() {
	//�Է�
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	//ó��
	dfs(0, 0);

	//���
	if (s == 0) count--;  //sum�� 0�� ��� dfs() ���ڸ��� count�� ������.
	printf("%d", count);
	return 0;
}*/