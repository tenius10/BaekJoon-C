/*#define _CRT_SECURE_NO_WARNINGS
#define true 1
#include <stdio.h>

char input[51];

int strlen(char* str) {
	int len = 0;
	while (str[len]) len++;
	return len;
}
int isNum(char ch) {
	return ch >= '0' && ch <= '9';
}
int pow(int a, int n) {
	int result = 1;
	for (int i = 0; i < n; i++) result *= a;
	return result;
}
int getNum(int index) {
	int result = 0;

	//몇자리 숫자인지 확인
	int len = 0;
	while (input[index] && isNum(input[index+len])) len++;

	//숫자로 변환
	for (int i = 0; i < len; i++) result += pow(10, len - 1 - i) * (input[index + i] - '0');
	return result;
}


int main() {
	//입력
	scanf("%s", input);

	//처리
	int result = getNum(0);
	int afterMinus=0;

	int len = strlen(input);
	for (int i = 0; i < len; i++) {
		if (!isNum(input[i])) {
			if (afterMinus) {
				result -= getNum(i + 1);
			}
			else {
				if (input[i] == '+') result += getNum(i + 1);
				else {
					afterMinus = true;
					result -= getNum(i + 1);
				}
			}
		}
	}

	//출력
	printf("%d", result);
	return 0;
}*/