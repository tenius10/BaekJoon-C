/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int len;
long long sum = 0, pow = 1;
char s[51];

// ������ �� : len�� �ִ� 50������ ���� �� �־ 31(�� 2^5)�� 50������ 2^250�� �ż�
//					8byte�� -2^63 ~2^63-1�� ������ ���� long long���ε� �� ���� �� ����.
//					�׷��� sum�� pow�� 1234567891�� ��� �����鼭 �����ؾ� �Ѵ�.
// ���⼭ �򰥸��� �� : 
// (s[i] - 96) * pow �� len��ŭ ������ �� 1234567891�� ���� ����
// (s[i] - 96) * (pow % 1234567891)�� len��ŭ ������ �� 1234567891�� ���� ���� ���� ������? 
// (���� ������ ���� sum�� �������� �� ���� ������ �����ϴ� �� �ƴϰ� len�� �����ϴ� ���� �������� ������)
// 
// ��������δ� ����.
// ���� ) (Q_1 * M + R_1) * (Q_2 * M + R_2) = M^2 * (Q_1 * Q_2) + M * (Q_1 * R_2 + Q_2 * R_1) + R_1 * R_2
//			 �� �������� ����� ���� M���� ������ ������ ����̴� ���׿��� M���� ���� �������� ���غ��� R_1 * R_2.
//			 ó���� ���ϱ� ������ M���� ������ �����ؼ� ����� ����� ����.
//			 ((Q_1 * M + R_1) % M) * ((Q_2 * M + R_2) % M) = R_1 * R_2

int main() {
	scanf("%d", &len);
	scanf("%s", s);
	for (int i = 0; i < len; i++, pow = (pow*31) % 1234567891, sum %= 1234567891) 
		sum += (s[i] - 96) * pow;
	printf("%d", sum);
	return 0;
}*/