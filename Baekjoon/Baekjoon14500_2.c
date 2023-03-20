/*#define _CRT_SECURE_NO_WARNINGS
#define max(a,b) (a>b)?a:b
#include <stdio.h>

//28ms

int n, m;
int arr[503][503] = {0,};

int main() {
	//입력
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &arr[i][j]);

	//처리
	int max = 0;
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			n1 = arr[i][j]; n2 = arr[i][j + 1]; n3 = arr[i][j + 2]; n4 = arr[i][j + 3];
			n5 = arr[i + 1][j]; n6 = arr[i + 1][j + 1]; n7 = arr[i + 1][j + 2];
			n8 = arr[i + 2][j]; n9 = arr[i + 2][j + 1];
			n10 = arr[i + 3][j];

			max = max(max, n1 + n2 + n3 + n4);
			max = max(max, n1 + n5 + n8 + n10);
			max = max(max, n1 + n2 + n5 + n6);
			max = max(max, n1 + n5 + n8 + n9);
			max = max(max, n3 + n5 + n6 + n7);
			max = max(max, n1 + n2 + n6 + n9);
			max = max(max, n1 + n2 + n3 + n5);
			max = max(max, n2 + n6 + n8 + n9);
			max = max(max, n1 + n2 + n5 + n8);
			max = max(max, n1 + n2 + n3 + n7);
			max = max(max, n1 + n5 + n6 + n7);
			max = max(max, n1 + n5 + n6 + n9);
			max = max(max, n2 + n3 + n5 + n6);
			max = max(max, n2 + n5 + n6 + n8);
			max = max(max, n1 + n2 + n6 + n7);
			max = max(max, n2 + n5 + n6 + n7);
			max = max(max, n1 + n5 + n6 + n8);
			max = max(max, n1 + n2 + n3 + n6);
			max = max(max, n2 + n5 + n6 + n9);
		}
	}

	//출력
	printf("%d", max);
	return 0;
}*/