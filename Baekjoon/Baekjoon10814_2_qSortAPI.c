/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�Է��� �̷��� ������ �� ����ϰ� ���� �� �־�!
typedef struct
{
	int age;
	char name[101];
}member;

//qsort �Լ��� 4��° �Ű������� ���� ������ �����ش�. (-1, 0, 1 �߿� ��ȯ�ؾ� ��)
int compare(const void* first, const void* second)
{
	//�̷��� ������ �̿��ؼ� ǥ���ؾ� ��
	//first, second�� void* ���̾ member*�� ĳ���� �� a, b�� ��������� �Ѵ�.
	member* a = (member*)first;
	member* b = (member*)second;

	if (a->age <= b->age)
		return -1;
	else if (a->age > b->age)
		return 1;
	return 0;
}

int main()
{
	//�Է�
	int  n;
	//member����ü�� �迭�� ���� �Ŵϱ� 1���� �����͸� ��.
	member* list;
	scanf("%d", &n);
	//member����ü�ϱ� �����Ҵ絵 �׿� �°�!(4+101=105byte��)
	list = (member*)malloc(n * sizeof(member));
	//��� ������ ���
	for (int i = 0; i < n; i++) scanf(" %d %s", &list[i].age, list[i].name);

	//ó��
	//qsort�� quickSort�� ���Ӹ��̰�
	//ù��° �Ű������� ������ �迭
	//�ι�° �Ű������� �迭�� ���� ����
	//����° �Ű������� �迭 �ϳ��� �޸� ũ��
	//�׹�° �Ű������� �񱳸� ������ �Լ� ������ int (compare*)(const void*, const void*)
	qsort(list, n, sizeof(list[0]), compare);

	//���
	for (int i = 0; i < n; i++) printf("%d %s\n", list[i].age, list[i].name);

	return 0;
}*/