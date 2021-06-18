#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

int cat[100006];
int visited[100006];
vector<int> mp[100006];

int n, m, ans;

void dfs(int x, int cont){
	visited[x] = 1;
	if(cont > m)return;
	int flag = 0;
	for(int i = 0;i < (int)mp[x].size();i++){
		int v = mp[x][i];
		if(visited[v] == 0){
			flag = 1;
			if(cat[v])dfs(v, cont + 1);
			else dfs(v,0);
		}
	}
	if(flag == 0)ans++;
}

void solve(){
	ans = 0;
	cin >> n >> m;
	memset(visited, 0, sizeof(visited));
	for(int i = 1;i <= n;i++)mp[i].clear();
	for(int i = 1;i <= n;i++)cin >> cat[i];
	for(int i = 1;i < n;i++){
		int x, y;
		cin >> x >> y;
		mp[x].push_back(y);
		mp[y].push_back(x);
	}
	ans = 0;
	dfs(1, cat[1]);
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}

