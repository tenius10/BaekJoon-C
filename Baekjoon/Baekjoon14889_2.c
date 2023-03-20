/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//다른 사람 코드(20ms)
//내 코드와 다른 점
//A팀의 팀원을 다 정한 후에 B팀의 배열을 한 번에 채움.(연산량 절감)


int N;
int map[20][20];  //처음 입력 (n*n칸 씀)

//make_an함수에서 arr2를 채울 때 먼저 다 채운 배열은 n/2번째 인덱스로 이동하기 때문에 크기는 n/2+1까지 만들어줘야 함.
int arr[11];  //팀1 (n/2칸만 씀)
int arr2[11];  //팀2 (n/2칸만 씀)

int sum1, sum2;
int check[25];
int min = 99999999;

//cnt1일때 sum1에 더함 cnt2일때 sum2에 더함
//a행 b열, b행 a열 더해주는 부분
void add(int cnt, int a, int b) {
	if (cnt == 1) {
		//cnt는 1일때 A팀일때
		sum1 += map[a][b];
		sum1 += map[b][a];
	}
	else {
		//cnt는 2일때 B팀일때
		sum2 += map[a][b];
		sum2 += map[b][a];
	}
	return;
}

//이미 채워진 arr에 따라 arr2에도 조원 번호를 적어줌
void make_an() {
	int n1 = 0;
	int n2 = 0;

	//i는 팀원 번호(0번 팀원부터 N-1번 팀원까지)
	for (int i = 0; i < N; i++) {
		//arr 배열의 n1인덱스가 i번 팀원이 아니라면 그 팀원은 우리팀이 아니라 arr2팀에 있음.
		if (i != arr[n1]) {
			arr2[n2++] = i;
		}
		//arr배열의 n1인덱스가 i번 팀원이라면 그 팀원은 우리 팀이니 arr2에 특별한 처리 없이 넘어감.
		//arr에 이미 그 팀원 번호가 적혀있으니 따로 수정할 필요없이 다음 인덱스로 ++.
		else {
			n1++;
		}
	}
	return;
}

//이미 채워진 arr을 이용해서 조원을 뽑음 (내가 이중for문 돌린 걸 재귀로 바꾼 것뿐임)
//첫번째 팀의 조원 2명 조합을 골라서 add함수에 넘김
void add_sum1(int n) {
	if (n == 0) sum1 = 0;
	if (n == N / 2) return;

	for (int i = n + 1; i < N / 2; i++) {
		//더하기 연산
		add(1, arr[n], arr[i]);
	}
	add_sum1(n + 1);
	return;
}

//두번째 팀의 조원 2명 조합을 골라서 add함수에 넘김
void add_sum2(int n) {
	if (n == 0) sum2 = 0;
	if (n == N / 2) return;

	for (int i = n + 1; i < N / 2; i++) {
		add(2, arr2[n], arr2[i]);
	}
	add_sum2(n + 1);
	return;
}

//sum1과 sum2의 차를 반환
int ans() {
	if (sum1 > sum2) return sum1 - sum2;
	else return sum2 - sum1;
}

//그룹을 두개 만드는 함수
void find_group(int n, int cnt) {
	//arr배열을 채움.
	arr[cnt] = n;

	//종료 조건
	if (cnt == (N / 2) - 1) {
		//arr ,arr2배열 채우기
		make_an();
		//채워진 arr, arr2배열을 기반으로 더하고
		add_sum1(0);
		add_sum2(0);
		//sum1과 sum2의 차를 min과 비교
		if (min > ans()) min = ans();
		return;
	}
	//arr[cnt] = n;

	//반복 재귀
	for (int i = n + 1; i < N; i++) {
		find_group(i, cnt + 1);
	}
	return;
}

int main(void) {
	//입력
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	//처리
	find_group(0, 0);

	//출력
	printf("%d", min);
	return 0;
}*/