/*#include <stdio.h>
#define STACK_SIZE 30
#define QUEUE_SIZE 30
#define VERTEX_NUM 7

int top = -1;
int stack[STACK_SIZE];

int front = -1, rear = -1;
int queue[QUEUE_SIZE];

//���� �Լ�
void push(int item) {
	if (top >= STACK_SIZE) {
		printf("���� �� ��.\n");
		return;
	}
	stack[++top] = item;
}
int pop() {
	if (top <= -1) {
		printf("���� ��.\n"); return;
	}
	return stack[top--];
}
int isEmpty_stack() {
	return (top <= -1) ? 1 : 0;
}

//ť �Լ�
void enqueue(int item) {
	if (rear >= QUEUE_SIZE - 1) {
		printf("ť �� ��\n");
		return;
	}
	queue[++rear] = item;
}
int dequeue() {
	if (front == rear) {
		printf("ť ��\n");
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

//���� ���
int g[VERTEX_NUM][VERTEX_NUM] = {
				{0,1,1,1,0,0,0},
				{1,0,0,0,1,0,0},
				{1,0,0,0,1,1,0},
				{1,0,0,0,0,1,0},
				{0,1,1,0,0,0,1},
				{0,0,1,1,0,0,1},
				{0,0,0,0,1,1,0}
};
int visited[VERTEX_NUM];    //���� �湮�ߴ��� Ȯ��



// ���� �켱 Ž�� (��� ���)
void dfs_recursive(int v) {
	//���� ���� push
	if (!visited[v]) {
		printf("%c ", v + 65);
		visited[v] = 1;

		for (int i = 0; i < VERTEX_NUM; i++) {
			if (g[v][i] == 1 && !visited[i]) dfs_recursive(i);
		}
	}
}

//���� �켱 Ž�� (���� ���)
void dfs_stack(int start) {
	//���� ���� push
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

//�ʺ� �켱 Ž��
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
	printf("���� �켱 (DFS)\n");
	dfs_recursive(0);
	printf("\n\n");

	//visit �迭 �ʱ�ȭ
	for (int i = 0; i < VERTEX_NUM; i++) visited[i] = 0;

	printf("�ʺ� �켱 (BFS)\n");
	bfs(0);
	printf("\n\n");
}*/