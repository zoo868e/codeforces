#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	ll n;
	cin >> n;
	ll j = 0;
	for(ll i = 2;i <= 100000;i++){
		if( n % i == 0){
			j = i;
			break;
		}
	}
	if( j == 0)j = n;
	cout << n / j << " " << n - n / j << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

