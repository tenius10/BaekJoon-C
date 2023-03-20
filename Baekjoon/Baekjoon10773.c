/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main() {
	int n; scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	int top = -1; int sum = 0;
	for (int i = 0; i < n; i++) {
		top++;
		scanf("%d", &arr[top]);
		if (arr[top] == 0) top-=2;
	}
	for (int i = 0; i <= top; i++) {
		sum += arr[i];
	}
	printf("%d", sum);

	return 0;
}*/