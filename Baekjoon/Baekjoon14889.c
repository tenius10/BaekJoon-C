/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

//A�� �迭�� �� ä�� �Ŀ� A���� ���� ����� B�� �迭�� ä��� ������ �ٲ�.
//ó���� �̷��� �����Ϸ��ٰ� ��� �������� ���� �� ������ �����߾���. ���� �ٽ� ������� ���߿��� �� �����!
//(���׽��� add���꿡�� �迭�� ���� aIndex, bIndex�� �ΰ� �ϳ��� �����鼭 �ε��� ������Ű�� ������� �����ϸ� ��)

int min = INT_MAX;
int data[20][20];

//���� �迭�̸� {0,} �̷� �� �� ���൵ 0���� ä����.
int teamA[11];  //ũ�⸦ n/2+1��
int teamB[11];
int n;

int main() {
	//�Է�
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &data[i][j]);
		}
	}

	//ó��
	backTracking(0, -1);

	//���
	printf("%d", min);
	return 0;
}

//ä���� teamA �迭�� ���� teamB�� ä��.
void fillBTeam() {
	int AIndex=0;
	int BIndex = 0;
	for (int i = 0; i < n; i++) {
		if (i == teamA[AIndex]) {
			//i��° ����� A���� ������
			AIndex++;
		}
		else {
			//i��° ����� A���� ������ (B���� �ִ°� ��)
			teamB[BIndex++] = i;
		}
	}
}

//step�� A������ ���° �ε����� ä��� �ִ���
//preIndex�� �ڽ��� ȣ���� ��Ϳ����� � ���� A�迭�� ä���־�����
int backTracking(int step, int preIndex) {
	if (step >= n / 2) {
		fillBTeam();
		//calc�� O(n^2)�����̾ ��� ũ�ϱ� �� ���� �����ϰ� re�� ��ȯ���� �����ؼ� ����.
		int re = calc(0,0);
		if (re < min) min = re;
		return;
	}
	for (int i = preIndex + 1; i < n; i++) {
		//teamA[step]=i; �� �迭�� ���� ä���ִ� ������ ���ÿ� ���� ������ ����� ������(�����)
		teamA[step] = i;
		backTracking(step + 1, i);
	}
}

int calc() {
	int a = 0;
	for (int i = 0; i < n/2 - 1; i++) {
		for (int j = i + 1; j < n/2; j++) {
			a += data[teamA[i]][teamA[j]];
			a += data[teamA[j]][teamA[i]];
		}
	}
	int b = 0;
	for (int i = 0; i < n/2 - 1; i++) {
		for (int j = i + 1; j < n / 2; j++) {
			b += data[teamB[i]][teamB[j]];
			b += data[teamB[j]][teamB[i]];
		}
	}
	return a > b ? a - b : b - a;
}*/