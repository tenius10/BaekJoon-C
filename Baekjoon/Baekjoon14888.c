/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

void re(int step);
int calc();

int num[11];
int op[10];  //0�� ���ϱ�, 1�� ����, 2�� ���ϱ�, 3�� ������
int isVisited[10];
int selectOP[10];  //�����δ� n-1���� ��.

int n;
int min = INT_MAX;
int max = INT_MIN;

int main() {
	//�Է�
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &num[i]);
	int opIndex = 0;
	for (int i = 0; i < 4; i++) {
		int temp;
		scanf("%d", &temp);
		for (int j = 0; j < temp; j++) {
			op[opIndex++] = i;
		}
	}
	//ó��
	re(0);

	//���
	printf("%d\n%d", max, min);
	return 0;
}

void re(int step) {
	//1. ��������
	if (step == n - 1) {
		int temp = calc();
		if (temp > max) max = temp;
		if (temp < min) min = temp;
		return;
	}

	//2. ó��
	//������ ����
	int curOP;
	for (int i = 0; i < n - 1; i++) {
		if (!isVisited[i]) {
			selectOP[step] = op[i];
			isVisited[i] = 1;
			re(step + 1);
			isVisited[i] = 0;
		}
	}

}
//������ �迭 �ָ� ������� ����ؼ� ��ȯ
int calc() {
	int result = num[0];
	for (int i = 0; i < n - 1; i++) {
		switch (selectOP[i]) {
		case 0:
			result = result + num[i + 1];
			break;
		case 1:
			result = result - num[i + 1];
			break;
		case 2:
			result = result * num[i + 1];
			break;
		case 3:
			if (result > 0) {
				result = result / num[i + 1];
			}
			else {
				result = -(-result / num[i + 1]);
			}
		}
	}

	return result;
}*/