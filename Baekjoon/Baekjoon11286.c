/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100000

//최대 힙 문제

int heap[SIZE];
int size = 0;

int abs(int n) { return (n < 0)? - n:n; }
void insert(int item) {
	if (size == SIZE) {
		printf("히프 꽉 참\n");
		return;
	}
	int i = ++size;
	while (i != 1) {
		if (abs(item) < abs(heap[i / 2])) {
			heap[i] = heap[i / 2];
			i /= 2;
		}
		else if (abs(item) == abs(heap[i / 2]) && item < heap[i / 2]) {
			heap[i] = heap[i / 2];
			i /= 2;
		}
		else break;
	}
	heap[i] = item;
}

int delete() {
	if (size == 0) return 0;
	int item = heap[1];
	int temp = heap[size--];
	int parent = 1;
	int child = 2;
	while (child <= size) {
		if (child < size) {
			if (abs(heap[child]) > abs(heap[child + 1])) child++;
			else if (abs(heap[child]) == abs(heap[child + 1]) && heap[child] > heap[child + 1]) child++;
		}
		if (abs(temp) < abs(heap[child]) || (abs(temp) == abs(heap[child])&& temp<heap[child])) break;
		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}
	heap[parent] = temp;
	return item;
}

int main() {
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int input;  scanf("%d", &input);
		if (input != 0) insert(input);
		else  printf("%d\n", delete());
	}
	return 0;
}*/