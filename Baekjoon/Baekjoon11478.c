/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[1001];
//글자 수가 1000일때 길이가 1000인 서브 문자열은 하나니까 중복이 없어서 999+1로 크기 정함.
typedef char string[1000];
string ss[1000];
//처음에 
string sortedss[1000];
string result;
int compare(const void* f, const void* s) {
	string* a = (string*)f;
	string* b = (string*)s;
	if (strcmp(*a, *b) < 0) return -1;
	else if (strcmp(*a, *b) > 0) return 1;
	else return 0;
}
char* subString(char* _s, int a, int b) {
	int i = a;
	int index = 0;
	while (i < b) {
		result[index++] = _s[i++];
	}
	result[index] = '\0';
	return result;
}
int binarySearch(string* arr, int n, string key) {
	int low = 0; int high = n - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(arr[mid], key) == 0) return 1;
		else if (strcmp(arr[mid], key) < 0) low = mid + 1;
		else high = mid - 1;
	}
	return 0;
}
int main() {
	scanf("%s", s);
	int sLen = strlen(s);
	int count = 0;
	for (int curLen = 1; curLen < sLen; curLen++) {
		for (int i = 0; i < sLen - curLen + 1; i++) {
			strcpy(ss[i], subString(s, i, i + curLen));
		}
		qsort(ss, sLen - curLen + 1, sizeof(ss[0]), compare);

		int index = 0;
		for (int i = 0; i < sLen - curLen + 1; i++) {
			if (binarySearch(sortedss, index, ss[i]) == 0) {
				strcpy(sortedss[index++], ss[i]);
			}
		}
		count += index;
	}
	//마지막에 길이가 sLen인 서브 문자열(s와 같음)도 포함해서 count+1
	count++;
	printf("%d", count);

	return 0;
}*/