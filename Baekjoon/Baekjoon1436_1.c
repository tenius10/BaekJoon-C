/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

int isValid(int num) {
	int temp = num;
	while (temp >= 666) {
		if (temp % 1000 == 666) {
			return 1;
		}
		else temp /= 10;
	}
	return 0;
}

void find(int n) {
	int count = 0;  //������� ���� ������ �� ����
	int num = 666;  //�ϳ��� ������ų ��
	while (count < n) {
		if (isValid(num)) count++;
		num++;
	}
	printf("%d\n", num - 1);
}
int main() {
	//scanf("%d", &n);
	for (int i = 1; i < 100; i++) find(i);


	return 0;
}*/