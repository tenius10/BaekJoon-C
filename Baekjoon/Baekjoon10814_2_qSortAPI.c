/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//입력을 이렇게 받으면 더 깔끔하게 받을 수 있어!
typedef struct
{
	int age;
	char name[101];
}member;

//qsort 함수에 4번째 매개변수로 정렬 기준을 정해준다. (-1, 0, 1 중에 반환해야 함)
int compare(const void* first, const void* second)
{
	//이렇게 포인터 이용해서 표현해야 함
	//first, second가 void* 형이어서 member*로 캐스팅 후 a, b에 대입해줘야 한다.
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
	//입력
	int  n;
	//member구조체의 배열을 받을 거니까 1차원 포인터를 씀.
	member* list;
	scanf("%d", &n);
	//member구조체니까 동적할당도 그에 맞게!(4+101=105byte임)
	list = (member*)malloc(n * sizeof(member));
	//멤버 접근자 사용
	for (int i = 0; i < n; i++) scanf(" %d %s", &list[i].age, list[i].name);

	//처리
	//qsort는 quickSort의 줄임말이고
	//첫번째 매개변수는 정렬할 배열
	//두번째 매개변수는 배열의 원소 개수
	//세번째 매개변수는 배열 하나의 메모리 크기
	//네번째 매개변수는 비교를 수행할 함수 포인터 int (compare*)(const void*, const void*)
	qsort(list, n, sizeof(list[0]), compare);

	//출력
	for (int i = 0; i < n; i++) printf("%d %s\n", list[i].age, list[i].name);

	return 0;
}*/