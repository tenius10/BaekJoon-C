/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


//백준 제출했는데 시간초과 나와서 그냥 API 썼음


typedef struct {
	int age;
	char name[101];
}member;

//퀵 정렬의 특징
//최선의 시간 복잡도 : O(nlogn)
//최악의 시간 복잡도 : O(n^2)
//최악의 시간 복잡도가 n^2이어서 병합 정렬보다 안 좋다고 생각 할 수 있지만
//내부 연산의 처리 시간이 병합정렬보다 짧아서 시간복잡도에 비해 처리속도가 좋다.
//평균 시간 복잡도는 O(nlogn)으로 같은 nlogn인데 내부 연산 속도까지 빠르니 대부분의 경우에서 병합정렬보다 빠르다.
//기본적인 코드는 불안정 정렬이다. 아래의 코드는 내가 안정 정렬로 수정한 코드다.
void quickSort(member* arr, int low, int high) {
	int left = low;
	int right = high;
	int pivot = arr[(left + right) / 2].age;  //읽기 전용이니까 상관없음.

	//while의 조건을 left<right가 아니라 등호도 포함시킨 이유:
	//while이 끝난 시점에 right가 left보다 왼쪽에 위치하도록 하려고
	//만약 left<right로 두면 경우에 따라서는 left와 right가 같아서 재귀함수를 호출하기 애매할 수 있다.
	while (left <=right) {
		//1. 정복

		//탐색
		//pivot의 왼쪽에 pivot보다 큰 애가 있으면 위치를 바꿔줘야 함.
		//탐색 결과 left는 pivot보다 크거나 작은 값을
		//right는 pivot보다 작거나 같은 값을 가리키게 됨.
		//pivot과 같은 경우를 while문 조건에 포함하지 않은 이유는
		//left 혹은 right가 이미 pivot과 같은 경우 계속 pivot을 가리키도록 하기 위함이다.
		//이후 if문을 보면 알겠지만 if문에서 left와 right를 바꿀 때 pivot자리와 pivot보다 작거나 큰데 위치가 적절하지 않아
		//pivot과 위치를 swap하는 경우도 있기 떄문에 while문에 등호는 포함하지 않았다.

		while (left <= high && arr[left].age <= pivot) left++;
		if (left > high) left = (low+high)/2;  //pivot의 인덱스
		//ㅋㅋㅋㅋㅋ 왜 자꾸 >=를 =>로 쓰는 거야 ㅋㅋㅋㅋ 시험때 손 코딩 조심해라. 부등호는 수정하지 말고 걍 지운 후에 다시 쓰는게 덜 헷갈리는 듯
		while (right >= low && arr[right].age >= pivot) right--;
		if (right < low) right = (low + high) / 2;  //pivot의 인덱스


		//left가 가리키는 값은 pivot보다 크거나 같고
		//right가 가리키는 값을 pivot보다 작거나 같은데
		//left가 right보다 더 왼쪽에 있으면 pivot과 같거나 큰 값이 pivot과 같거나 작은 값보다 왼쪽에 있다는 의미니까
		//자리를 바꿔줌.
		//left와 right가 같으면 위치를 바꿔봤자 제자리니까 의미가 없음.
		//그럼에도 if문 조건에 등호를 포함한 이유는 left와 right가 같을 때 인덱스를 변화시킴으로써 while문을 끝내주는 역할이 필요하기 때문이다.
		if (left <= right) {
			//swap
			if (arr[left].age == arr[right].age) {
				left++;
				right--;
			}
			else {
				//구조체 멤버를 수정할 때는 (->)연산자를 써야 함.
				//(.)연산자는 읽기 전용

				//ㅅㅂ 보니까 걍 점 연산자로 써도 되네 우씨 진짜 화나게 하고 있어! ㅠㅠ
				int temp = arr[right].age;
				arr[right].age = arr[left].age;
				arr[left].age = temp;

				char tempString[101];
				strcpy(tempString, arr[right].name);
				strcpy(arr[right].name, arr[left].name);
				strcpy(arr[left].name, tempString);

				left++;
				right--;
			}
		}
	}
	//while문을 빠져나온 시점에서 left는 right보다 인덱스가 2크게 된다.
	//while문 안의 while문은 pivot과 같은 값을 만났을 때 멈추고
	//결국 마지막에 나가기 직전은 left와 right가 같은 상태에서 if문을 만나 left는 pivot보다 한 칸 뒤에, right는 pivot보다 한 칸 앞에 위치하게 된다.

	//2. 분할
	//이 부분이 재귀의 종료 조건이다.
	if (low < right) {
		//right가 pivot보다 한 칸 앞이라고 했는데 만약 pivot이 가장 왼쪽에 정렬될 원소였으면
		//right는 인덱스가 low보다 낮아지게 된다.
		//이 경우는 해당 구역에 대한 정렬이 완료된 상태이므로 다시 재귀를 필요가 없어진다.
		quickSort(arr, low, right);
	}
	if (left < high) {
		quickSort(arr, left, high);
	}
}


int main() {
	//입력
	int n; scanf("%d", &n);
	member* memberArr = (member*)malloc(sizeof(member) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &memberArr[i].age, &memberArr[i].name);
	}

	//처리
	quickSort(memberArr, 0, n - 1);

	//출력
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", memberArr[i].age, memberArr[i].name);
	}

	//해제
	free(memberArr);
	return 0;
}*/