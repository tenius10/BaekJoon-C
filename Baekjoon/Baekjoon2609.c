/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Ŭ���� �˰���(��Ŭ���� ȣ����)
//a%b=r �̶�� �� �� a,b�� �ִ������� b,r�� �ִ������� ���ٴ� ���� �̿�

//�ִ�����(greater common divisor)
//�ּҰ����(least common multiple)
void gcdAndLcm(int n1, int n2) {
	int a = n1;
	int b = n2;
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	printf("%d\n", b);
	printf("%d", (n1 * n2) / b);
}
int main() {
	int n1, n2; scanf("%d %d", &n1, &n2);
	gcdAndLcm(n1,n2);
	return 0;
}*/