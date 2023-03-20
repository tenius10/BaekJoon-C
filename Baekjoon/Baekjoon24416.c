/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[41];
int fib(int n) {
	if (n == 1 || n == 2) return 1;
	arr[1] = arr[2] = 1;
	for (int i = 3; i <=n; i++) {
		arr[i] = arr[i-1] + arr[i - 2];
	}
	return arr[n];
}
int main() {
	int n; scanf("%d", &n);
	
	printf("%d %d", fib(n), n-2);
	return 0;
}*/