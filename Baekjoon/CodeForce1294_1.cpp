/*#include <iostream>
#include <map>
using namespace std;

//2214ms

int q, x;
int num;

int a[400000] = {0,};

map <int, int> m;
int mex;

int main() {
	cin >> q >> x;

	mex = -1;
	for (int i = 0; i < q; i++) {
		cin >> num;

		m[x * a[num % x] + num % x] = 0;  //다른 값들이랑 겹치지 않는 선에서 최대한 작은 값 삽입
		a[num % x]++;  //앞에 값들이 몇 개 차있는지

		//앞이 채워진만큼 mex올리기
		while (true) {
			if (m.find(mex + 1) == m.end()) break;
			else mex++;
		}
		cout << mex + 1 << endl;
	}

	return 0;
}*/