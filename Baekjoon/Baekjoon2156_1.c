/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, count, n1, n2;
int arr[10001];
int dp[10001];

int max(int a, int b) { return a < b ? b : a; }

int main() {
	//�Է�
	scanf("%d", &n);
	for (int i = 1; i < n+1; i++) scanf("%d", &arr[i]);

	//ó��
	dp[0] = 0;
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	count = 2;

	for (int i = 3; i < n+1; i++) {
		if (count < 2) {
			count++;
			dp[i] = dp[i - 1] + arr[i];
		}
		else {
			n1 = dp[i - 2] + arr[i];
			n2 = dp[i - 3] + arr[i - 1] + arr[i];
			int larger = max(n1, n2);

			if (larger <= dp[i - 1]) {
				//���� ���� ���� �� ��
				dp[i] = dp[i - 1];
				count = 0;
			}
			else {
				//���� ���� ������
				dp[i] = larger;
				if (n1 < n2) count = 2;
				else count = 1;
			}
		}
		printf("%d\n", dp[i]);
	}

	//���
	printf("%d", dp[n]);
	return 0;
}*/