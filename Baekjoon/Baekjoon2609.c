/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//유클리드 알고리즘(유클리드 호제법)
//a%b=r 이라고 할 때 a,b의 최대공배수와 b,r의 최대공배수는 같다는 점을 이용

//최대공약수(greater common divisor)
//최소공배수(least common multiple)
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