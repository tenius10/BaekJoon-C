/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int start, end;
}appointment;
int n;
appointment input[100000];

int compare(const void* first, const void* second) {
	appointment* n1 = (appointment*)first;
	appointment* n2 = (appointment*)second;
	if (n1->start < n2->start) return -1;
	else if (n1->start > n2->start) return 1;
	else {
		if (n1->end < n2->end) return -1;
		else if (n1->end > n2->end) return 1;
		else return 0;
	}
}

int main() {
	//�Է�
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &input[i].start, &input[i].end);
	}

	//����
	qsort(input, n, sizeof(appointment), compare);

	//ó��
	int result = 0;
	int possibleTime = 0;  //�� �ú��� ���డ������
	for (int i = 0; i < n; i++) {
		if (input[i].start < possibleTime) {
			if (input[i].end < possibleTime) possibleTime = input[i].end;
		}
		else {
			result++;
			possibleTime = input[i].end;
		}
	}

	//���
	printf("%d", result);
	return 0;
}*/