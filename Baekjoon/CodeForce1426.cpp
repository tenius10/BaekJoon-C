/*#include <iostream>
#include <map>
using namespace std;

//234ms

int n; 
int result = 0;

long long input;
long long sum = 0;
map<long long, int> m;

int main() {
	cin >> n;
	m[0] = 0;
	for (int i = 0; i < n; i++) {
		cin >> input;
		sum += input;  //누적합 구해주기

		if (m.find(sum) == m.end()) m[sum] = 0;  //누적합이 0인 수열 발견 못 했으면 계속 누적합 기록해주기
		else {
			//누적합이 0인 수열 만났으면 result 증가시키고 맵 초기화
			// (i-1)와 i 사이에 무한이 들어간거니까 i 는 다시 누적합에 넣어줘야 함
			result++;
			m.clear();
			m[0] = 0;
			sum = input;
			m[sum] = 0;
		}
	}

	cout << result;
	return 0;
}*/