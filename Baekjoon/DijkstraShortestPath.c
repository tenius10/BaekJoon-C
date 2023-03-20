//���ͽ�Ʈ�� �˰���
//����) �ִܰ�θ� �ϳ��� Ȯ����Ű�鼭 ��� �ִܰ�θ� �����Ѵ�.
//�ٽ�) (a->b�� �Ÿ�) < (a->c�� �Ÿ�) �϶� a->c->b�� a->b���� ����� �� ����.
//����) �ִܰ�θ� Ȯ����Ų ������ ���ؼ��� �ٸ� ���������� ���ο� �ִ� �Ÿ��� ���� �� �ִ�.

//1. ������ ������ ã�� �� �� �ִ� ��θ� ã�´�.
//2. �ִ� ��θ� ã�� ������ �湮������ ǥ���ϰ� �ٸ� ��� �����鿡 ���� �ִ� ��θ� �����Ѵ�. �ٽ� 1�� ���ư���.
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS	
#define VERTEX_NUM 7
#define INF 2100000000


//����ġ �׷��������� ������Ŀ� ����ġ�� ����.
//INF�� ����� ������ ���ٴ� ������ �� �����̴�.
int g[VERTEX_NUM][VERTEX_NUM]= { { 0,  7,  INF, INF,   3,  10, INF },
	{ 7,  0,    4,  10,   2,   6, INF },
	{ INF,  4,    0,   2, INF, INF, INF },
	{ INF, 10,    2,   0,  11,   9,   4 },
	{ 3,  2,  INF,  11,   0, INF,   5 },
	{ 10,  6,  INF,   9, INF,   0, INF },
	{ INF, INF, INF,   4,   5, INF,   0 } };
int distance[VERTEX_NUM];
int selected[VERTEX_NUM];

void printStatus(int step) {
	printf("Step: %d\n", step);
	printf("selected: ");
	for (int i = 0; i < VERTEX_NUM; i++) {
		printf("%d ", selected[i]);
	}
	printf("\n");
	printf("distance: ");
	for (int i = 0; i < VERTEX_NUM; i++) {
		if (distance[i] == INF) printf("* ");
		else printf("%d ", distance[i]);
	}
	printf("\n\n");
}

void shortestPath(int start, int dest) {
	//ó�� start�κ����� �Ÿ��� distance �迭 �ʱ�ȭ

	int minVertex = 0;
	selected[start] = 1;
	//ó�� �ʱ�ȭ
	for (int i = 0; i < VERTEX_NUM; i++) {
		distance[i] = g[start][i];
	}

	for (int step = 0; step < VERTEX_NUM; step++) {
		if (step == start) continue;

		int min = INF;
		for (int i = 0; i < VERTEX_NUM; i++) {
			if (selected[i]) {
				//Ȯ������ ���� ������ �� �ּ� �Ÿ��� ������ ���� ����
				for (int j = 0; j < VERTEX_NUM; j++) {
					
					if (!selected[j]) {
						if (distance[i] + g[i][j] < distance[j]) {
							distance[j] = distance[i] + g[i][j];
						}
						if (distance[j] < min) {
							min = distance[j];
							minVertex = j;
						}
					}
				}
				
			}
		}
		printStatus(step);
		selected[minVertex] = 1;
	}
}

int main() {
	printf("<< ���ͽ�Ʈ�� �ִ� �Ÿ� �˰��� >>\n");
	shortestPath(0,6);  //0[A]������ 6[G]������ �̵�

	return 0;
}*/