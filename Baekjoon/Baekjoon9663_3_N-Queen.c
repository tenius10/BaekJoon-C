/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//세번째 방식 (2284ms)

//두번째 방식의 하위 호환 방식임.
//두번째와 다른 점은 check라는 함수를 통해 나와 같은 값을 가진 녀석이 있는지 확인해야 한다는 점이다.
//애초에부터 열+행, 열-행의 값으로 나온 수를 인덱스로 써주면 된다. (열-행은 0이상의 수만 나오도록 n-1을 더해주면 됨)
//두번째보다 좋은 점은 그나마 메모리 사용량이 적다는 점. 세번째 방식은 대각선과 역대각선이 각각 n인 반면 두번째 방법은 2n-1이다.

int n;

//크기 n으로 넣어주면 되는데 어차피 범위도 작으니까 그냥 최대 크기 14넣음.
int isVisited[14];  //열 구분
int iPN[14];  //역대각선 구분
int iMN[14];  //대각선 구분
int result = 0;

void nQueen(int curRow) {
	if (curRow == n) {
		result++;
		return;
	}

	for (int curCol = 0; curCol < n; curCol++) {
		//지금 열이 이미 선택했던 열이 아니라면
		if (!isVisited[curCol]) {
			int p = curCol + curRow;   //p는 역대각선을 확인하기 위함. nXn 행렬을 그려보면 역대각선 관계에 있는 원소들은 행과 열을 더한 값이 같음.
			int m = curCol - curRow;  //m는 대각선을 확인하기 위함. nXn 행렬을 그려보면 대각선 관계에 있는 원소들은 행과 열의 차가 같음.
			if (check(p, m, curRow)) {
				//같은 열에는 놓을 수 없다. 그래서 행이 바뀌어도 방문한 열에 대한 배열은 같은 것을 써도 됨.
				isVisited[curCol] = 1;
				iPN[curRow] = p;
				iMN[curRow] = m;

				nQueen(curRow + 1);
				//재귀 호출을 끝내고 돌아온 후에 현재 보고 있던 열에 대한 체크를 지워야 함.
				//iPN과 iMN는 0~(curRow-1) 의 범위를 for문으로 돌려보는 거라서 현재 열의 다른 칸들을 방문하면서 덮어씌워짐.
				//만약 이번 칸에 더 이상 가능한 경우의 수가 없어서 그냥 넘어간다고 하더라도 재귀를 그만두고 나가기 때문에 더 이상 그 칸을 쓸 일이 없음.
				//그럼 나머지 재귀들이 알아서 자기들의 데이터를 채울 거임.(리턴 후에 돌아가는 지점은 row가 현재보다 낮기 때문에 현재 row에 대한 기록을 지울 필요가 없음)
				isVisited[curCol] = 0;
			}
		}
	}
}

int check(int p, int m, int idx) {
	for (int i = 0; i < idx; i++) {
		if (iPN[i] == p)return 0;
		if (iMN[i] == m)return 0;
	}
	return 1;
}

int main() {
		scanf("%d", &n);
		nQueen(0);
		printf("%d", result);
		return 0;
}*/