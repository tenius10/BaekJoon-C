/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100000

//ÃÖ¼Ò Èü ¹®Á¦

int heap[SIZE];
int size = 0;

void insert(int item) {
	if (size == SIZE) {
		printf("È÷ÇÁ ²Ë Âü\n");
		return;
	}
	int i = ++size;
	while (i != 1 && item < heap[i / 2]) {
		heap[i] = heap[i / 2];
		i /= 2;
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
		if (child < size && heap[child] > heap[child + 1]) {
			child++;
		}
		if (temp <= heap[child]) break;
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
		if (input > 0) insert(input);
		else printf("%d\n", delete());
	}
	return 0;
}*/