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
		sum += input;  //������ �����ֱ�

		if (m.find(sum) == m.end()) m[sum] = 0;  //�������� 0�� ���� �߰� �� ������ ��� ������ ������ֱ�
		else {
			//�������� 0�� ���� �������� result ������Ű�� �� �ʱ�ȭ
			// (i-1)�� i ���̿� ������ ���Ŵϱ� i �� �ٽ� �����տ� �־���� ��
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