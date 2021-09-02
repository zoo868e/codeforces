#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, ans = 0;
	cin >> n;
	int a[n], b[n], pos[n];
	map<int, int> offset;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		pos[a[i]] = i;
	}
	for(int i = 0;i < n;i++)cin >> b[i];
	for(int i = 0;i < n;i++){
		int cur = pos[b[i]] - i;
		if(cur < 0)cur += n;
		offset[cur]++;
	}
	for(auto &it:offset)
		ans = max(ans, it.second);
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}

