#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	ll n;
	cin >> n;
	for(ll i = 1;pow(i, 3) < n;i++){
		long double t = cbrt(n - pow(i, 3));
		if(t == floor(t)){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

