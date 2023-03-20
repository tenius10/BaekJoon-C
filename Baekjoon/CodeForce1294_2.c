/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//233ms

int q, x;
int arr[400000] = {0,};
int num;
int result = 0;

int main() {
	scanf("%d %d", &q, &x);
	while(q--) {
		scanf("%d", &num);
		arr[num%x]++;
		while (arr[result % x]) {
			arr[result % x]--;
			result++;
		}
		printf("%d\n", result);
	}

	return 0;
}*/