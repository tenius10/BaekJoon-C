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
		//입력
		scanf("%d", &n);
		clear(n);  //맵 비우기

		for (int j = 0; j < n; j++) {
			scanf("%s", keys[j]);  //공백 앞 단어 받고
			scanf("%s", keys[j]);  //공백 뒷 단어로 덮어쓰기
			add(keys[j]);  //의상 종류를 맵에 추가
		}

		//처리
		int result = 1;
		for (int j = 0; j < size; j++) result *= (values[j] + 1);
		printf("%d\n", result - 1);
	}
	return 0;
}*/