/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 10989�� ���� (�־����� ���� 1������ �۰ų� ���ٰ� �������־ �Է°� ���ÿ� count��)

int main() {
	//�Է�
	int n; scanf("%d", &n);
	int arr[10001]={0,};  //10000���� �۰ų� �����ϱ�
	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num]++;
	}

	//���
	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	//����
	return 0;
}*/