/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, s, limit, max, maxIndex, fix = 0;
int arr[50];

int main() {
	//입력
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	scanf("%d", &s);

	//처리
	while (s > 0 && fix < n) {
		max = 0, limit = fix + s < n ? fix + s : n;
		for (int i = fix; i <= limit; i++) if (arr[i] > max) { max = arr[i]; maxIndex = i; }
		s -= (maxIndex - fix);
		for (int i = maxIndex; i > fix; i--) arr[i] = arr[i - 1];
		arr[fix++] = max;
	}

	//출력
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	return 0;
}*/