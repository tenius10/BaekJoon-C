/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int len;
long long sum = 0, pow = 1;
char s[51];

// 주의할 점 : len은 최대 50까지도 들어올 수 있어서 31(약 2^5)의 50제곱은 2^250이 돼서
//					8byte로 -2^63 ~2^63-1의 범위를 지닌 long long으로도 다 담을 수 없다.
//					그래서 sum과 pow를 1234567891로 계속 나누면서 진행해야 한다.
// 여기서 헷갈리는 점 : 
// (s[i] - 96) * pow 를 len만큼 실행한 후 1234567891로 나눈 값과
// (s[i] - 96) * (pow % 1234567891)을 len만큼 실행한 후 1234567891로 나눈 값이 과연 같을까? 
// (물론 후자의 경우는 sum을 마지막에 한 번만 나머지 연산하는 건 아니고 len번 진행하는 내내 나머지를 구해줌)
// 
// 결론적으로는 같다.
// 증명 ) (Q_1 * M + R_1) * (Q_2 * M + R_2) = M^2 * (Q_1 * Q_2) + M * (Q_1 * R_2 + Q_2 * R_1) + R_1 * R_2
//			 맨 마지막에 출력할 값이 M으로 나머지 연산한 결과이니 우항에서 M으로 나눈 나머지를 구해보면 R_1 * R_2.
//			 처음에 곱하기 전부터 M으로 나머지 연산해서 계산한 결과와 같다.
//			 ((Q_1 * M + R_1) % M) * ((Q_2 * M + R_2) % M) = R_1 * R_2

int main() {
	scanf("%d", &len);
	scanf("%s", s);
	for (int i = 0; i < len; i++, pow = (pow*31) % 1234567891, sum %= 1234567891) 
		sum += (s[i] - 96) * pow;
	printf("%d", sum);
	return 0;
}*/