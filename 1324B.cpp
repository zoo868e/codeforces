#include"bits/stdc++.h"

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[5010], m[n];
	bool ans = false;
	memset(a, 0, sizeof(a));
	for(int i = 0;i < n;i++){
		cin >> m[i];
		a[m[i]]++;
		if(a[m[i]] == 1);
		else if(a[m[i]] == 2 && m[i - 1] != m[i])
			ans = true;
		else if(a[m[i]] == 3)
			ans = true;
	}
	if(ans)cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

