/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printNumberSet(int n, int m, int curPrintedNumber,int printNumber[],int before) {
	//종료 조건
	if (curPrintedNumber >= m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", printNumber[i]+1);
		}
		printf("\n");
		return;
	}
	for (int i = before; i < n; i++) {
		printNumber[curPrintedNumber] = i;
		printNumberSet(n, m, curPrintedNumber + 1, printNumber,i);
	}
}

int main() {
	int n, m; scanf("%d %d", &n, &m);
	int printNumber[8];
	printNumberSet(n,m,0,printNumber,0);
	return 0;
}*/