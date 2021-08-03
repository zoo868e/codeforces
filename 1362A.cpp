#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	ll a, b;
	cin >> a >> b;
	int ans = 0;
	if(a < b)swap(a, b);
	if(a % b == 0){
		ll t = a / b;
		while(t % 2 == 0 && t > 0){
			if(t % 8 == 0)t /= 8;
			else if(t % 4 == 0)t /= 4;
			else t /= 2;
			ans += 1;
		}
		if(t > 1)cout << -1 << endl;
		else cout << ans << endl;
	}
	else cout << -1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

