/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//규칙 찾아서 규칙대로 구현하려고 했는데 스터디 시간 얼마 안 남아서 여기까지 하기로.
//나중에 기회되면 마무리하자.


int pow(int a, int n) {
	int result = 1;
	for (int i = 0; i < n; i++) result *= a;
	return result;
}
int getSixCount(int n) {
	int count = 0;
	while (n / 10 != 0) {
		if (n % 10 == 6) count++;
		n /= 10;
	}
	if (n % 10 == 6) count++;
	return count;
}
int getLen(int n) {
	int len = 0;
	while (n / 10 != 0) {
		n /= 10;
		len++;
	}
	return ++len;
}

void findNum(int n) {
	int left = 0, right = -1;
	int leftMax = 10;
	int len = 1;  //left 길이와 right 길이의 합
	int count = 1;  //종말의 수 개수
	int rightPrint = 0;
	while (count < n) {
		left++;
		if (left == leftMax) {
			len++;
			leftMax *= 10;
		}

		int sixCount = 0;
		if (left % 10 == 6) {
			sixCount++;
			if (left > 10 && (left / 10) % 10 == 6) sixCount++;
			if (left > 100 && (left / 100) % 100 == 6) sixCount++;
		}

		if (getSixCount(left) >= 3) {
			int rightLen = len - getLen(left)+3;
			int rightMax = pow(10, rightLen);
			for (int j = 0; j < rightMax; j++) {
				count++;
				if (count == n) {
					right = j;
					rightPrint = 1;
					break;
				}
			}
		}
		else if (sixCount == 1 || sixCount == 2) {
			int rightMax = pow(10, sixCount);
			for (int j = 0; j < rightMax; j++) {
				count++;
				if (count == n) {
					right = j;
					rightPrint = 1;
					break;
				}
			}
		}
		else {
			count++;
			if (count == n) rightPrint = 0;
		}
	}

	//출력
	if (rightPrint) {
		if (len - getLen(right) > 0) {
			printf("%d", left);
			int sixCount = 0;
			if (left % 10 == 6) {
				sixCount++;
				if (left > 10 && (left / 10) % 10 == 6) sixCount++;
				if (left > 100 && (left / 100) % 100 == 6) sixCount++;
			}
			for (int i = 0; i < 3 - sixCount; i++) printf("6");
			int zero = len - (getLen(left) - sixCount) - getLen(right);
			for (int i = 0; i < zero; i++) printf("0");
			printf("%d", right);
		}
		else {
			printf("666");
			int zero = len - getLen(right);
			for (int i = 0; i < zero; i++) printf("0");
			printf("%d", right);
		}

	}
	else {
		if (left > 0) printf("%d", left);

		int sixCount = 0;
		if (left % 10 == 6) {
			sixCount++;
			if (left > 10 && (left / 10) % 10 == 6) sixCount++;
			if (left > 100 && (left / 100) % 100 == 6) sixCount++;
		}
		for (int i = 0; i < 3 - sixCount; i++) printf("6");

		if (len - getLen(left) > 0) printf("%d", right);
	}
}

int isValid(int num) {
	int temp = num;
	while (temp >= 666) {
		if (temp % 1000 == 666) {
			return 1;
		}
		else temp /= 10;
	}
	return 0;
}

int findNum2(int n) {
	int count = 0;  //현재까지 구한 종말의 수 개수
	int num = 666;  //하나씩 증가시킬 수
	while (count < n) {
		if (isValid(num)) count++;
		num++;
	}

	printf("%d\n", num - 1);
}


int main() {
	//입력
	int n;
	scanf("%d", &n);

	//처리
	findNum(n);
	printf("\n");
	findNum2(n);
	return 0;
}*/