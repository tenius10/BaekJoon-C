/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ) �־��� �������� ���� ���������� �ʰ� �����͵� �� (20ms)

int n, s;
int arr[20];
int select[20] = { 0 };

int count = 0;
int len;

void bt(int step, int preIndex) {
	if (step == len) {
		int sum = 0;
		for (int i = 0; i < len; i++) sum += arr[select[i]];
		if (sum == s) count++;
		return;
	}
	for (int i = preIndex + 1; i < n - (len - step) + 1; i++) {
		select[step] = i;
		bt(step + 1, i);
	}
}

int main() {
	//�Է�
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	//ó��
	for (int i = 1; i <= n; i++) {
		len = i;
		bt(0, -1);
	}

	//���
	printf("%d", count);
	return 0;
}*/