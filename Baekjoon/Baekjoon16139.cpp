/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
using namespace std;

string s;
char ch;
int q, l, r, cnt;
list<int> alpha[26] ;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr); 
	cout.tie(nullptr);
	cin >> s;
	for (int i = 0; i < s.length(); i++) alpha[s[i]-'a'].push_back(i);
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> ch >> l >> r;
		cnt = 0;
		for (int i : alpha[ch-'a']) {
			if (i > r) break;
			if (i >= l) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}*/