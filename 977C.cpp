#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a, a + n);
	if(k == 0){
		if(a[0] != 1)cout << 1 << endl;
		else cout << -1 << endl;
	}
	else if(k == n)cout << a[n - 1] << endl;
	else if(a[k] == a[k - 1])cout << -1 << endl;
	else cout << a[k - 1] << endl;
}

int main(){
	solve();
	return 0;
}

