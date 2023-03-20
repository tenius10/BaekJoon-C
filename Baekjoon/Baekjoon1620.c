/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
#include <stdlib.h>

typedef char string[21];
typedef struct {
	string name;
	int num;
}monster;

monster nArr[100000];
string mArr[100000];
string input[100000];

int isDigit(char* s) {
	int len = (int)strlen(s);
	int isDigit = 1;
	for (int i = 0; i < len; i++) {
		if (!isdigit(s[i])) {
			isDigit = 0;
			break;
		}
	}
	return isDigit;
}

int binarySearch(string key,int n) {
	int low = 0;
	int high = n - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(nArr[mid].name,key)==0) return mid;
		else if (strcmp(nArr[mid].name, key)<0) low = mid + 1;
		else high = mid - 1;
	}
	return 0;
}

int compare(const void* first, const void* second)
{
	//이렇게 포인터 이용해서 표현해야 함
	//first, second가 void* 형이어서 member*로 캐스팅 후 a, b에 대입해줘야 한다.
	monster* a = (monster*)first;
	monster* b = (monster*)second;

	if (strcmp(a->name,b->name)<=0)
		return -1;
	else if (strcmp(a->name, b->name) > 0)
		return 1;
	return 0;
}

int main() {
	int n, m; scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", nArr[i].name);
		strcpy(input[i], nArr[i].name);
		nArr[i].num = i+1;
	}
	for (int i = 0; i < m; i++) {
		scanf("%s", mArr[i]);
	}

	qsort(nArr, n, sizeof(nArr[0]), compare);

	for (int i = 0; i < m; i++) {
		if (isDigit(mArr[i])) {
			printf("%s\n", input[atoi(mArr[i]) - 1]);
		}
		else {
			printf("%d\n", nArr[binarySearch(mArr[i],n)].num);
		}
	}
	return 0;
}*/