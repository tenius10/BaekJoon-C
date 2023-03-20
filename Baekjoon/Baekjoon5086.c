/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	do {
		if (n1 <= n2) {
			if (n2 % n1 == 0) printf("factor\n");
		}
		else {
			if (n1 % n2 == 0) printf("multiple\n");
			else printf("neither\n");
		}
		scanf("%d %d", &n1, &n2);
	} while (n1 != 0 || n2 != 0);

	return 0;
}*/