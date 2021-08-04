#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, x;
	cin >> n >> x;
	int a[n], b[x];
	memset(b, 0, sizeof(b));
	ll s = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		s += a[i];
	}
	int i = 0, j = n - 1, ans = n;
	if(s % x == 0){
		while(i < n && a[i] % x == 0)i++;
		while(j >= 0 && a[j] % x == 0)j--;
		//cout << "i = " << i << ", j = " << j << endl;
		if(i == n && j == -1)ans = -1;
		else{
			ans = max(n - i - 1, j);
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

