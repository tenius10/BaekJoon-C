/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recursive(int n,int cur,char** words);

int main() {
	int n; scanf("%d", &n);
	char* words[50] = {"\"����Լ��� ������?\"",
		"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.",
		"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.",
	"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"",
	"��� �亯�Ͽ���." };

	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	for (int i = 0; i < 4; i++) printf("%s\n", words[i]);
	recursive(n,1,words);
	printf("��� �亯�Ͽ���.");
	return 0;
}

void recursive(int n, int cur,char**words) {
	if (n!=cur) {
		for(int i=0;i<5;i++)
		{
			if (i == 4) {
				recursive(n, cur + 1, words);
			}
			for (int j = 0; j < cur; j++) {
				printf("____");
			}
			printf("%s\n", words[i]);
		}
	}
	else {
		for (int j = 0; j < cur; j++) {
			printf("____");
		}
		printf("\"����Լ��� ������?\"\n");
		for (int j = 0; j < cur; j++) {
			printf("____");
		}
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		for (int j = 0; j < cur; j++) {
			printf("____");
		}
		printf("��� �亯�Ͽ���.\n");
	}
}*/