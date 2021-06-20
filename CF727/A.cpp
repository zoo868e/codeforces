#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	long long int n, x, k, now = 0, pre = 0, ret = 0;
	cin >> n >> x >> k;
	if(n * x <= k){
		cout << (n - 1) * n / 2 << endl;
		return;
	}
	now = k / x;
	cout << (n - 1 - now)*now + now * (1 + now) / 2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

