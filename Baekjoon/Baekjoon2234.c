/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m, arr[50][50] = { 0, }, maxAdjSize = 0, roomSize[2501] = { 0, }, count = 0, roomNum = -1, maxRoomSize = 0, maxTwoRoomSize = 0;
int mask[4] = { 1 << 1, 1 << 3, 1 << 0, 1 << 2 };  //상하좌우
int dr[4] = { -1, 1, 0, 0 }, dc[4] = { 0, 0, -1, 1 }, nr, nc;

int max(int a, int b) { return a > b ? a : b; }
void dfs(int r, int c) {
	int val = arr[r][c];
	arr[r][c] = roomNum;
	roomSize[-roomNum]++;
	count++;  //칸을 몇 개 돌아봤는지
	for (int i = 0; i < 4; i++) {
		nr = r + dr[i], nc = c + dc[i];
		if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
			//벽 건너편이 다른 방이고 이미 갔다 온 방이면, 인접한 방의 최대 크기와 건녀편 방의 크기를 비교해서 최대값 갱신
			if (val & mask[i]) { if (arr[nr][nc] < 0 && arr[nr][nc] != roomNum) maxAdjSize = max(maxAdjSize, roomSize[-arr[nr][nc]]); }
			else if (arr[nr][nc] >= 0) dfs(nr, nc);  //벽이 없고 방문한 적 없으면
		}
	}
}
void visit_other_room() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//이미 방문한 곳은 arr에 (-1)*(방 번호)가 쓰여있음
			if (arr[i][j] >= 0) {
				maxAdjSize = 0;
				dfs(i, j);
				maxRoomSize = max(maxRoomSize, roomSize[-roomNum]);
				maxTwoRoomSize = max(maxTwoRoomSize, maxAdjSize + roomSize[-roomNum]);
				roomNum--;
				return;
			}
		}
	}
}

int main() {
	//입력
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &arr[i][j]);

	//처리
	while (count != n * m) visit_other_room();

	//출력
	printf("%d\n%d\n%d", -roomNum - 1, maxRoomSize, maxTwoRoomSize);
	return 0;
}*/