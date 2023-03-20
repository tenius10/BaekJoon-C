/*#include <stdio.h>
#define STACK_SIZE 30
#define QUEUE_SIZE 30
#define VERTEX_NUM 7

int top = -1;
int stack[STACK_SIZE];

int front = -1, rear = -1;
int queue[QUEUE_SIZE];

//스택 함수
void push(int item) {
	if (top >= STACK_SIZE) {
		printf("스택 꽉 참.\n");
		return;
	}
	stack[++top] = item;
}
int pop() {
	if (top <= -1) {
		printf("스택 빔.\n"); return;
	}
	return stack[top--];
}
int isEmpty_stack() {
	return (top <= -1) ? 1 : 0;
}

//큐 함수
void enqueue(int item) {
	if (rear >= QUEUE_SIZE - 1) {
		printf("큐 꽉 참\n");
		return;
	}
	queue[++rear] = item;
}
int dequeue() {
	if (front == rear) {
		printf("큐 빔\n");
		return;
	}
	return queue[++front];
}
int isEmpty_queue() {
	return rear == front? 1:0;
}

//             [A]
//          /   |    \
//	   [B]   |    [D]
//	     |   [C]   |
//         |   /   \   |
//	   [E]        [F]
//	       \       /
//		      [G]

//인접 행렬
int g[VERTEX_NUM][VERTEX_NUM] = {
				{0,1,1,1,0,0,0},
				{1,0,0,0,1,0,0},
				{1,0,0,0,1,1,0},
				{1,0,0,0,0,1,0},
				{0,1,1,0,0,0,1},
				{0,0,1,1,0,0,1},
				{0,0,0,0,1,1,0}
};
int visited[VERTEX_NUM];    //정점 방문했는지 확인



// 깊이 우선 탐색 (재귀 사용)
void dfs_recursive(int v) {
	//시작 정점 push
	if (!visited[v]) {
		printf("%c ", v + 65);
		visited[v] = 1;

		for (int i = 0; i < VERTEX_NUM; i++) {
			if (g[v][i] == 1 && !visited[i]) dfs_recursive(i);
		}
	}
}

//깊이 우선 탐색 (스택 사용)
void dfs_stack(int start) {
	//시작 정점 push
	push(start);

	while (!isEmpty_stack()) {
		int v = pop();
		if (!visited[v]) {
			printf("%c ", v + 65);
			visited[v] = 1;

			for (int i = VERTEX_NUM-1; i >= 0; i--) {
				if (g[v][i] == 1 && !visited[i]) push(i);
			}
		}
	}
}

//너비 우선 탐색
void bfs(int start) {
	enqueue(start);

	while (!isEmpty_queue()) {
		int v = dequeue();
		if (!visited[v]) {
			printf("%c ", v + 65);
		}
		
		visited[v] = 1;

		for (int i = 0; i < VERTEX_NUM; i++) {
			if (g[v][i] == 1 && visited[i]==0) {
				enqueue(i);
			}
		}
	}

}

void main() {
	printf("깊이 우선 (DFS)\n");
	dfs_recursive(0);
	printf("\n\n");

	//visit 배열 초기화
	for (int i = 0; i < VERTEX_NUM; i++) visited[i] = 0;

	printf("너비 우선 (BFS)\n");
	bfs(0);
	printf("\n\n");
}*/