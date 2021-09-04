#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	map<int, int> a;
	for(int i = 0;i < n;i++){
		int t;
		cin >> t;
		if(t % k == 0)continue;
		a[k - t % k]++;
	}
//	for(auto x:a)cout << x.first << " " << x.second << endl;
	int mx = 0;
	ll ans = 0;
	for(auto x:a){
		mx = max(mx, x.second);
	}
	for(auto x:a){
		if(x.second == mx && x.first != k){
			ans = k * 1ll * (mx - 1) + x.first + 1;
		}
	}
	if(a[k] == n)cout << "0\n";
	else
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

