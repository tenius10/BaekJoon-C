/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

//map 쓰면 수행 시간이 2배 가까이 늘어나니까 지양하자

int cnt_e;
short cnt_v, t, u, v;
char visited[20001];
bool result;
vector<vector<short>> adj(20001);

void dfs(int v) {
	int size = adj[v].size();
	for (int i = 0; i < size; i++) {
		if (visited[adj[v][i]] == 2) {
			visited[adj[v][i]] = 1 - visited[v];
			dfs(adj[v][i]);
			if (!result) return;
		}
		else if (visited[v] + visited[adj[v][i]] != 1) {
			result = false;
			return;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> t;
	while (t-- > 0) {
		cin >> cnt_v >> cnt_e;
		result = true;
		for (int i = 1; i <= cnt_v; i++) {
			visited[i] = 2;
			adj[i].clear();
		}
		for (int i = 0; i < cnt_e; i++) {
			cin >> u >> v;
			adj[u].emplace_back(v);
			adj[v].emplace_back(u);
		}
		while (result) {
			short next = -1;
			for (int i = 1; i <= cnt_v; i++) if (visited[i] == 2) { next = i; break; }
			if (next == -1) break;
			else {
				visited[next] = 1;
				dfs(next);
			}
		}
		if (result) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}*/