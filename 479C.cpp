#include"bits/stdc++.h"
#define ll long long int
using namespace std;

void solve(){
	int n;
	cin >> n;
	pair<ll, ll> a[n];
	for(int i = 0;i < n ;i++)
		cin >> a[i].first >> a[i].second;
	sort(a, a + n);
	ll ans = -1;
	for(int i = 0;i < n;i++){
		if(a[i].second >= ans)
			ans = a[i].second;
		else
			ans = a[i].first;
	}
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}

