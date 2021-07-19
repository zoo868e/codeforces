#include"bits/stdc++.h"

#define ll long long int

using namespace std;

void solve(){
	ll a, b, c, ans1 = -1, ans2 = -1;
	cin >> a >> b >> c;
	if(a < c)ans1 = 1;
	if(a > c / b)ans2 = b;
	cout << ans1 << " " << ans2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

