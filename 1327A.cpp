#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	cout << (!((n + k)%2) && sqrt(n) >= k ? "YES\n" : "NO\n");
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

