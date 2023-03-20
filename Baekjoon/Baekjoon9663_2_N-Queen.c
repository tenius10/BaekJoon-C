/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//백트래킹 알고리즘을 이해하기에 좋은 문제이다.

//두번째 방법 (1632ms)

int isused1[14]; // column을 차지하고 있는지
int isused2[27]; // / 방향 대각선을 차지하고 있는지
int isused3[27]; // \ 방향 대각선을 차지하고 있는지. 문제에 주어진 최대크기 14일때 대각선은 2n-1개로 27개가 나옴.

int cnt = 0;
int n;

void func(int cur) { // cur번째 row에 말을 배치할 예정임
    if (cur == n) { // N개를 놓는데 성공했다면
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) { // (cur, i)에 퀸을 놓을 예정
        if (isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1]) // column이나 대각선 중에 문제가 있다면
            continue;
        isused1[i] = 1;
        isused2[i + cur] = 1;
        isused3[cur - i + n - 1] = 1;  //ex. 5X5 행렬의 경우 row-col하면 -4~4가 나오는데 이걸 배열에 저장하려고 n-1인 4를 더해서 0~9로 만들어줄 수 있음.
        func(cur + 1);

        //백트래킹 알고리즘의 핵심인 이전 상태로 값을 되돌리는 작업.
        //위의 재귀에서 채워넣은 부분은 현재 행과는 관련없기에 이곳에서 지울 필요가 없다.
        //내가 초기화해야 하는 데이터만을 골라서 초기화시켜주는 작업이 아주 중요하다.
        isused1[i] = 0;
        isused2[i + cur] = 0;
        isused3[cur - i + n - 1] = 0;
    }
}

int main(void) {
    scanf("%d", &n);
    func(0);
    printf("%d", cnt);
    return 0;
}*/