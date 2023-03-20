/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

//A팀 배열을 다 채운 후에 A팀에 없는 사람을 B팀 배열에 채우는 식으로 바꿈.
//처음에 이렇게 구현하려다가 어떻게 구현할지 감이 안 잡혀서 포기했었음. 지금 다시 배웠으니 나중에는 잘 써먹자!
//(다항식의 add연산에서 배열에 각각 aIndex, bIndex를 두고 하나씩 읽으면서 인덱스 증가시키는 방식으로 구현하면 됨)

int min = INT_MAX;
int data[20][20];

//전역 배열이면 {0,} 이런 거 안 해줘도 0으로 채워짐.
int teamA[11];  //크기를 n/2+1로
int teamB[11];
int n;

int main() {
	//입력
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &data[i][j]);
		}
	}

	//처리
	backTracking(0, -1);

	//출력
	printf("%d", min);
	return 0;
}

//채워진 teamA 배열에 따라 teamB를 채움.
void fillBTeam() {
	int AIndex=0;
	int BIndex = 0;
	for (int i = 0; i < n; i++) {
		if (i == teamA[AIndex]) {
			//i번째 사람이 A팀에 있으면
			AIndex++;
		}
		else {
			//i번째 사람이 A팀에 없으면 (B팀에 있는게 됨)
			teamB[BIndex++] = i;
		}
	}
}

//step은 A팀원의 몇번째 인덱스를 채우고 있는지
//preIndex는 자신을 호출한 재귀에서는 어떤 값을 A배열에 채워넣었는지
int backTracking(int step, int preIndex) {
	if (step >= n / 2) {
		fillBTeam();
		//calc도 O(n^2)연산이어서 비용 크니까 한 번만 실행하게 re로 반환값을 저장해서 쓰자.
		int re = calc(0,0);
		if (re < min) min = re;
		return;
	}
	for (int i = preIndex + 1; i < n; i++) {
		//teamA[step]=i; 가 배열에 값을 채워주는 역할인 동시에 이전 데이터 지우는 연산임(덮어쓰기)
		teamA[step] = i;
		backTracking(step + 1, i);
	}
}

int calc() {
	int a = 0;
	for (int i = 0; i < n/2 - 1; i++) {
		for (int j = i + 1; j < n/2; j++) {
			a += data[teamA[i]][teamA[j]];
			a += data[teamA[j]][teamA[i]];
		}
	}
	int b = 0;
	for (int i = 0; i < n/2 - 1; i++) {
		for (int j = i + 1; j < n / 2; j++) {
			b += data[teamB[i]][teamB[j]];
			b += data[teamB[j]][teamB[i]];
		}
	}
	return a > b ? a - b : b - a;
}*/