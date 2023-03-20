/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lcm(int n1, int n2) {
	int a = n1;
	int b = n2;
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return (n1 * n2) / b;
}

int main() {
	int t; scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n1, n2; scanf("%d %d", &n1, &n2);
		printf("%d\n", lcm(n1, n2));
	}

	return 0;
}*/