#include"bits/stdc++.h"
#define ll long long int

using namespace std;

vector<int> root, v[2010];
int d[2010], ans = 0;

void dfs(int x, int dep){
	d[x] = dep;
	ans = max(ans, d[x]);
	for(auto i:v[x])dfs(i, dep + 1);
	return;
}

void solve(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		int t;
		cin >> t;
		if(t != -1)v[t].push_back(i);
		else root.push_back(i);
	}
	for(auto x:root){
		dfs(x, 1);
	}
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}

