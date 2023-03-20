/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pow(int a, int n) {
	int result = 1;
	for (int i = 0; i < n; i++) result *= a;
	return result;
}
int strlen(const char* str) {
	int len = 0;
	while (str[len]) len++;
	return len;
}

void ConvertDecimalToBinary(char* b, int d) {
	int bitMask = 0b1;
	//거꾸로 채워짐
	for (int i = 0; i <32; i++) {
		if ((d & bitMask) == bitMask) b[i] = 1;
		else b[i] = 0;
		bitMask = bitMask << 1;
	}
}
char* ConvertDecimalToHexa(char* h, int d) {
	//2진수로 변환
	char b[32];
	ConvertDecimalToBinary(b, d);

	//16진수로 변환
	for (int i = 0; i <8; i++) {
		int count = 0;
		for (int j = 0; j < 4; j++) count += b[4 * i + j] * pow(2, j);

		if (count > 9) h[7-i] = count + 55;
		else h[7-i] = count + '0';
	}
	
	//앞에 0 없애기
	int len=0;  //앞에 0 길이
	for (int i = 0; i < 8; i++) {
		if (h[i] != '0') break;
		else len++;
	}
	for (int i = 0; i < len; i++) h[i] = h[i + len];  //문자열 앞으로 당기기
	h[8 - len] = '\0';
	return h;
}
int ConvertHexaToDecimal(const char* h) {
	int result = 0;
	int len = strlen(h);

	for (int i = 0; i < len; i++) {
		if (h[i] >= 'A' && h[i] <= 'Z') result += (h[i] - 55) * pow(16, len - 1 - i);
		else result += (h[i] - '0') * pow(16, len - 1 - i);
	}

	return result;
}


int main() {
	//10진수 -> 16진수
	int n;
	printf("10진수 입력: ");
	scanf("%d", &n);

	char h[9];  //16진수는 최대 8자리이고 마지막에 널 문자 포함 9칸
	printf("[printf에 %%X 이용] : %X\n", n);
	printf("[직접 16진수 문자열 만들기] : %s\n\n", ConvertDecimalToHexa(h, n));
	
	//16진수 -> 10진수
	char in[9];
	printf("16진수 입력: ");
	scanf("%s", in);
	printf("10진수로 변환 : %d\n", ConvertHexaToDecimal(in));

	return 0;
}*/