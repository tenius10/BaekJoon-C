/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//dp[i][j] = ( i ~ j )������ �Ӹ���� �������� ����
//2���� �迭�� ������ �����ִ� ������� ��� ���� �������� odd, even�� ä���ִ� �����
//�ð�/�޸� �鿡�� �;� ȿ�����̴�. 
//���� : ��� ���� �������� ä�� ���� �߰��� ���ڰ� ��Ī�� �ƴ� ��� break�� for���� �������ͼ� (n*(n+1)) / 2 ���� ���ų� ���� ���� Ƚ���� ���ϴµ�
//			2���� �迭�� ����� �������� ä��� ������ ���� �� �����ϰ� �޸𸮵� ���ϰ� ����ȴ�.

//odd[i] : ���̰� Ȧ���̰� ��� ���� �ε����� i�� �Ӹ���� ���� ����
//even[i] : ���̰� ¦���̰� ��� ���� �ε��� i�� �Ӹ���� ���� ����
int n, m, s, e, arr[2000], odd[2000] = { 0, }, even[2000] = { 0, }, i, l, r;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &arr[i]);
	for (i = 0; i < n; i++) {
		for (l = i, r = i; l >= 0 && r < n; l--, r++) {
			if (arr[l] == arr[r]) odd[i]++;
			else break;
		}
		for (l = i, r = i + 1; l >= 0 && r < n; l--, r++) {
			if (arr[l] == arr[r]) even[i]++;
			else break;
		}
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &s, &e);
		s--; e--;
		if ((e - s) % 2) {
			//������ ¦���� ���
			if (even[(s + e) / 2] >= (e - s + 1) / 2) printf("1\n");
			else printf("0\n");
		}
		else {
			//������ Ȧ���� ���
			if (odd[(s + e) / 2] >= (e - s) / 2 + 1) printf("1\n");
			else printf("0\n");
		}
	}
	return 0;
}*/