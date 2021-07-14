#include"bits/stdc++.h"
#define ll long long int
using namespace std;



void solve(){
	ll n;
	cin >> n;
	for(ll i = 2; pow(i, 3)<= n;i++){
		if(n % i == 0){
			ll t = n / i;
			for(ll j = i + 1;pow(j, 2) < t;j++){
				if(t % j == 0){
					cout << "YES\n" << i << " " << j << " " << t / j << endl;
					return;
				}
			}
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

