/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int count = 0;
int size = 0;

typedef struct Node {
	int data;
	struct Node* llink;
	struct Node* rlink;
	int lcount;
	int rcount;
}node;

node* createNode(int item) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = item;
	newNode->llink = NULL;
	newNode->rlink = NULL;
	newNode->lcount = 0;
	newNode->rcount = 0;

	return newNode;
}

//루트는 처음에 아예 시작할 거고 중간에 바뀔 일 없음. 그래서 반환형을 void로 함.
void insert(node* root, int item) {
	if (root) {
		if (root->data == item) {
			//오른쪽 서브트리의 제일 왼쪽에 노드 삽입
			root->rcount++;
			if (root->rlink == NULL) {
				node* newNode = createNode(item);

				root->rlink = newNode;
			}
			else {
				node* temp = root->rlink;
				while (temp->llink != NULL) {
					temp->lcount++;
					temp = temp->llink;
				}
				node* newNode = createNode(item);

				temp->lcount++;
				temp->llink = newNode;
			}
		}
		else if (root->data > item) {
			//앞으로 내 왼쪽 서브트리에 노드가 하나 생길 예정이니 count추가
			root->lcount++;
			if (root->llink == NULL) {
				node* newNode = createNode(item);

				root->llink = newNode;
			}
			else {
				insert(root->llink, item);
			}
		}
		else {
			root->rcount++;
			if (root->rlink == NULL) {
				node* newNode = createNode(item);

				root->rlink = newNode;
			}
			else {
				insert(root->rlink, item);
			}
		}
	}
}

//n: 현재 트리의 노드 개수
int findMiddle(node* root) {
	if (root->lcount > (size + 1) / 2 - 1 - count) {
		return findMiddle(root->llink);
	}
	else if (root->lcount < (size + 1) / 2 - 1 - count) {
		count += root->lcount + 1;
		return findMiddle(root->rlink);
	}
	else {
		return root->data;
	}
}
int main() {
	int n; scanf("%d", &n);
	int in; scanf("%d", &in);
	node* newNode = createNode(in);
	node* root = newNode;
	printf("%d\n", in);
	size++;

	for (int i = 1; i < n; i++) {
		scanf("%d", &in);
		insert(root, in);
		size++;
		count = 0;
		printf("%d\n", findMiddle(root));
	}

	//해제
}*/