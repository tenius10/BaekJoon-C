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

		m[x * a[num % x] + num % x] = 0;  //�ٸ� �����̶� ��ġ�� �ʴ� ������ �ִ��� ���� �� ����
		a[num % x]++;  //�տ� ������ �� �� ���ִ���

		//���� ä������ŭ mex�ø���
		while (true) {
			if (m.find(mex + 1) == m.end()) break;
			else mex++;
		}
		cout << mex + 1 << endl;
	}

	return 0;
}*/