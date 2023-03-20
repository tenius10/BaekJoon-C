/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


//���� �����ߴµ� �ð��ʰ� ���ͼ� �׳� API ����


typedef struct {
	int age;
	char name[101];
}member;

//�� ������ Ư¡
//�ּ��� �ð� ���⵵ : O(nlogn)
//�־��� �ð� ���⵵ : O(n^2)
//�־��� �ð� ���⵵�� n^2�̾ ���� ���ĺ��� �� ���ٰ� ���� �� �� ������
//���� ������ ó�� �ð��� �������ĺ��� ª�Ƽ� �ð����⵵�� ���� ó���ӵ��� ����.
//��� �ð� ���⵵�� O(nlogn)���� ���� nlogn�ε� ���� ���� �ӵ����� ������ ��κ��� ��쿡�� �������ĺ��� ������.
//�⺻���� �ڵ�� �Ҿ��� �����̴�. �Ʒ��� �ڵ�� ���� ���� ���ķ� ������ �ڵ��.
void quickSort(member* arr, int low, int high) {
	int left = low;
	int right = high;
	int pivot = arr[(left + right) / 2].age;  //�б� �����̴ϱ� �������.

	//while�� ������ left<right�� �ƴ϶� ��ȣ�� ���Խ�Ų ����:
	//while�� ���� ������ right�� left���� ���ʿ� ��ġ�ϵ��� �Ϸ���
	//���� left<right�� �θ� ��쿡 ���󼭴� left�� right�� ���Ƽ� ����Լ��� ȣ���ϱ� �ָ��� �� �ִ�.
	while (left <=right) {
		//1. ����

		//Ž��
		//pivot�� ���ʿ� pivot���� ū �ְ� ������ ��ġ�� �ٲ���� ��.
		//Ž�� ��� left�� pivot���� ũ�ų� ���� ����
		//right�� pivot���� �۰ų� ���� ���� ����Ű�� ��.
		//pivot�� ���� ��츦 while�� ���ǿ� �������� ���� ������
		//left Ȥ�� right�� �̹� pivot�� ���� ��� ��� pivot�� ����Ű���� �ϱ� �����̴�.
		//���� if���� ���� �˰����� if������ left�� right�� �ٲ� �� pivot�ڸ��� pivot���� �۰ų� ū�� ��ġ�� �������� �ʾ�
		//pivot�� ��ġ�� swap�ϴ� ��쵵 �ֱ� ������ while���� ��ȣ�� �������� �ʾҴ�.

		while (left <= high && arr[left].age <= pivot) left++;
		if (left > high) left = (low+high)/2;  //pivot�� �ε���
		//���������� �� �ڲ� >=�� =>�� ���� �ž� �������� ���趧 �� �ڵ� �����ض�. �ε�ȣ�� �������� ���� �� ���� �Ŀ� �ٽ� ���°� �� �򰥸��� ��
		while (right >= low && arr[right].age >= pivot) right--;
		if (right < low) right = (low + high) / 2;  //pivot�� �ε���


		//left�� ����Ű�� ���� pivot���� ũ�ų� ����
		//right�� ����Ű�� ���� pivot���� �۰ų� ������
		//left�� right���� �� ���ʿ� ������ pivot�� ���ų� ū ���� pivot�� ���ų� ���� ������ ���ʿ� �ִٴ� �ǹ̴ϱ�
		//�ڸ��� �ٲ���.
		//left�� right�� ������ ��ġ�� �ٲ���� ���ڸ��ϱ� �ǹ̰� ����.
		//�׷����� if�� ���ǿ� ��ȣ�� ������ ������ left�� right�� ���� �� �ε����� ��ȭ��Ŵ���ν� while���� �����ִ� ������ �ʿ��ϱ� �����̴�.
		if (left <= right) {
			//swap
			if (arr[left].age == arr[right].age) {
				left++;
				right--;
			}
			else {
				//����ü ����� ������ ���� (->)�����ڸ� ��� ��.
				//(.)�����ڴ� �б� ����

				//���� ���ϱ� �� �� �����ڷ� �ᵵ �ǳ� �쾾 ��¥ ȭ���� �ϰ� �־�! �Ф�
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
	//while���� �������� �������� left�� right���� �ε����� 2ũ�� �ȴ�.
	//while�� ���� while���� pivot�� ���� ���� ������ �� ���߰�
	//�ᱹ �������� ������ ������ left�� right�� ���� ���¿��� if���� ���� left�� pivot���� �� ĭ �ڿ�, right�� pivot���� �� ĭ �տ� ��ġ�ϰ� �ȴ�.

	//2. ����
	//�� �κ��� ����� ���� �����̴�.
	if (low < right) {
		//right�� pivot���� �� ĭ ���̶�� �ߴµ� ���� pivot�� ���� ���ʿ� ���ĵ� ���ҿ�����
		//right�� �ε����� low���� �������� �ȴ�.
		//�� ���� �ش� ������ ���� ������ �Ϸ�� �����̹Ƿ� �ٽ� ��͸� �ʿ䰡 ��������.
		quickSort(arr, low, right);
	}
	if (left < high) {
		quickSort(arr, left, high);
	}
}


int main() {
	//�Է�
	int n; scanf("%d", &n);
	member* memberArr = (member*)malloc(sizeof(member) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &memberArr[i].age, &memberArr[i].name);
	}

	//ó��
	quickSort(memberArr, 0, n - 1);

	//���
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", memberArr[i].age, memberArr[i].name);
	}

	//����
	free(memberArr);
	return 0;
}*/