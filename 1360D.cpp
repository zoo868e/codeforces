#include"bits/stdc++.h"
#define ll long long int 
using namespace std;

static ll prime[100000];

void solve(){
	int n, k;
	cin >> n >> k;
	int ans = n;
	for(int i = 1;i*i <= n;i++){
		if(n % i == 0){
			if(i <= k){
				ans = min(ans, n / i);
			}
			if(n / i <= k){
				ans = min(ans, i);
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

