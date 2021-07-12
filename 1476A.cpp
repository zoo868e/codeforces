#include"bits/stdc++.h"

using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	if(n == 1)cout << k << endl;
	else{
		long long int m = k;
		m += (n / k - (n % k ? 0:1)) * k;
		cout << m / n + (m % n ? 1:0) << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

