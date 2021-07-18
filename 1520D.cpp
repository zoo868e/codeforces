#include"bits/stdc++.h"

using namespace std;

void solve(){
	int n, t;
	cin >> n;
	long long int ans = 0;
	map<int, int> a;
	for(int i = 0;i < n;i++){
		cin >> t;
		t -= i;
		ans += a[t];
		a[t]++;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

