//다익스트라 알고리즘
//접근) 최단경로를 하나씩 확정시키면서 계속 최단경로를 갱신한다.
//핵심) (a->b의 거리) < (a->c의 거리) 일때 a->c->b가 a->b보다 가까울 수 없다.
//참고) 최단경로를 확정시킨 정점에 대해서만 다른 정점으로의 새로운 최단 거리를 구할 수 있다.

//1. 근접한 정점을 찾아 그 중 최단 경로를 찾는다.
//2. 최단 경로를 찾은 정점을 방문함으로 표시하고 다른 모든 정점들에 대한 최단 경로를 갱신한다. 다시 1로 돌아간다.
/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS	
#define VERTEX_NUM 7
#define INF 2100000000


//가중치 그래프에서는 인접행렬에 가중치가 적힘.
//INF는 연결된 간선이 없다는 뜻으로 준 무한이다.
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
	//처음 start로부터의 거리로 distance 배열 초기화

	int minVertex = 0;
	selected[start] = 1;
	//처음 초기화
	for (int i = 0; i < VERTEX_NUM; i++) {
		distance[i] = g[start][i];
	}

	for (int step = 0; step < VERTEX_NUM; step++) {
		if (step == start) continue;

		int min = INF;
		for (int i = 0; i < VERTEX_NUM; i++) {
			if (selected[i]) {
				//확정되지 않은 정점들 중 최소 거리를 가지는 정점 고르기
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
	printf("<< 다익스트라 최단 거리 알고리즘 >>\n");
	shortestPath(0,6);  //0[A]번에서 6[G]번으로 이동

	return 0;
}*/