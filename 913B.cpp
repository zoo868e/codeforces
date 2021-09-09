#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n + 1];
	memset(a, 0, sizeof(a));
	vector<vector<int>> m;
	vector<vector<int>> child;
	m.resize(n + 1);
	child.resize(n + 1);
	for(int i = 2;i <= n;i++){
		cin >> a[i];
		m[a[i]].push_back(i);
		child[a[i]].push_back(i);
		auto it = find(m[a[a[i]]].begin(), m[a[a[i]]].end(), a[i]);
		if(it != m[a[a[i]]].end()){
			m[a[a[i]]].erase(it);
		}
	}
	for(int i = 1;i <= n;i++){
		if(child[i].size() > 0){
			if(m[i].size() < 3){
				cout << "NO\n";
				return;
			}
		}
		else continue;
	}
	cout << "YES\n";
}

int main(){
	solve();
	return 0;
}

