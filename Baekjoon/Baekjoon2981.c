/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//입력
	int t; scanf("%d", &t);
	int data[100];
	int max=1;
	int min = 1000000000;
	for (int i = 0; i < t; i++) {
		scanf("%d", &data[i]);
		if (data[i] < min) min = data[i];
		if (data[i] > max) max = data[i];
	}
	//처리
	int valid;
	for (int i = 2; i <= max-min; i++) {
		valid = 1;
		int remainder=data[0]%i;
		for (int j = 1; j < t; j++) {
			if (data[j] % i != remainder) {
				valid = 0;
				break;
			}
		}
		if (valid) printf("%d ", i);
	}
	return 0;
}*/