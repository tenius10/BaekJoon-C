/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, d, k, c, arr[30000], kind[3001] = { 0, }, count = 0, result = 0;

int main() {
	//�Է�
	scanf("%d %d %d %d", &n, &d, &k, &c);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	//ó��
	kind[c]++; count++;
	for (int i = 0; i < k; i++) if (!(kind[arr[i]]++)) count++;
	result = count;
	for (int i = 0; i < n-1; i++) {
		if (!(--kind[arr[i]])) count--;  //���� ���� �ʹ� ���� ����
		if (!(kind[arr[(k + i) % n]]++)) count++;  //�����ʿ� ���ο� �ʹ� ����
		result = count > result ? count : result;
	}

	//���
	printf("%d", result);
	return 0;
}*/