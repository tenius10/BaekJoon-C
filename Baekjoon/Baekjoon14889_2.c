/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ٸ� ��� �ڵ�(20ms)
//�� �ڵ�� �ٸ� ��
//A���� ������ �� ���� �Ŀ� B���� �迭�� �� ���� ä��.(���귮 ����)


int N;
int map[20][20];  //ó�� �Է� (n*nĭ ��)

//make_an�Լ����� arr2�� ä�� �� ���� �� ä�� �迭�� n/2��° �ε����� �̵��ϱ� ������ ũ��� n/2+1���� �������� ��.
int arr[11];  //��1 (n/2ĭ�� ��)
int arr2[11];  //��2 (n/2ĭ�� ��)

int sum1, sum2;
int check[25];
int min = 99999999;

//cnt1�϶� sum1�� ���� cnt2�϶� sum2�� ����
//a�� b��, b�� a�� �����ִ� �κ�
void add(int cnt, int a, int b) {
	if (cnt == 1) {
		//cnt�� 1�϶� A���϶�
		sum1 += map[a][b];
		sum1 += map[b][a];
	}
	else {
		//cnt�� 2�϶� B���϶�
		sum2 += map[a][b];
		sum2 += map[b][a];
	}
	return;
}

//�̹� ä���� arr�� ���� arr2���� ���� ��ȣ�� ������
void make_an() {
	int n1 = 0;
	int n2 = 0;

	//i�� ���� ��ȣ(0�� �������� N-1�� ��������)
	for (int i = 0; i < N; i++) {
		//arr �迭�� n1�ε����� i�� ������ �ƴ϶�� �� ������ �츮���� �ƴ϶� arr2���� ����.
		if (i != arr[n1]) {
			arr2[n2++] = i;
		}
		//arr�迭�� n1�ε����� i�� �����̶�� �� ������ �츮 ���̴� arr2�� Ư���� ó�� ���� �Ѿ.
		//arr�� �̹� �� ���� ��ȣ�� ���������� ���� ������ �ʿ���� ���� �ε����� ++.
		else {
			n1++;
		}
	}
	return;
}

//�̹� ä���� arr�� �̿��ؼ� ������ ���� (���� ����for�� ���� �� ��ͷ� �ٲ� �ͻ���)
//ù��° ���� ���� 2�� ������ ��� add�Լ��� �ѱ�
void add_sum1(int n) {
	if (n == 0) sum1 = 0;
	if (n == N / 2) return;

	for (int i = n + 1; i < N / 2; i++) {
		//���ϱ� ����
		add(1, arr[n], arr[i]);
	}
	add_sum1(n + 1);
	return;
}

//�ι�° ���� ���� 2�� ������ ��� add�Լ��� �ѱ�
void add_sum2(int n) {
	if (n == 0) sum2 = 0;
	if (n == N / 2) return;

	for (int i = n + 1; i < N / 2; i++) {
		add(2, arr2[n], arr2[i]);
	}
	add_sum2(n + 1);
	return;
}

//sum1�� sum2�� ���� ��ȯ
int ans() {
	if (sum1 > sum2) return sum1 - sum2;
	else return sum2 - sum1;
}

//�׷��� �ΰ� ����� �Լ�
void find_group(int n, int cnt) {
	//arr�迭�� ä��.
	arr[cnt] = n;

	//���� ����
	if (cnt == (N / 2) - 1) {
		//arr ,arr2�迭 ä���
		make_an();
		//ä���� arr, arr2�迭�� ������� ���ϰ�
		add_sum1(0);
		add_sum2(0);
		//sum1�� sum2�� ���� min�� ��
		if (min > ans()) min = ans();
		return;
	}
	//arr[cnt] = n;

	//�ݺ� ���
	for (int i = n + 1; i < N; i++) {
		find_group(i, cnt + 1);
	}
	return;
}

int main(void) {
	//�Է�
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	//ó��
	find_group(0, 0);

	//���
	printf("%d", min);
	return 0;
}*/