/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//0ms

typedef char string[21];

int size;
string keys[30];
int values[30];

void clear(int n) {
	size = 0;
	for (int i = 0; i < n; i++) values[i] = 0;
}
int add(string key) {
	int index = findIndex(key);
	if (index==-1) {
		strcpy(keys[size], key);
		values[size]++;
		size++;
	}
	else {
		values[index]++;
	}
}
int findIndex(string key) {
	for (int i = 0; i < size; i++) {
		if (strcmp(keys[i], key) == 0) {
			return i;
		}
	}
	return -1;
}


int  main() {
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		//�Է�
		scanf("%d", &n);
		clear(n);  //�� ����

		for (int j = 0; j < n; j++) {
			scanf("%s", keys[j]);  //���� �� �ܾ� �ް�
			scanf("%s", keys[j]);  //���� �� �ܾ�� �����
			add(keys[j]);  //�ǻ� ������ �ʿ� �߰�
		}

		//ó��
		int result = 1;
		for (int j = 0; j < size; j++) result *= (values[j] + 1);
		printf("%d\n", result - 1);
	}
	return 0;
}*/