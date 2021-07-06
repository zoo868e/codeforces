#include"bits/stdc++.h"

using namespace std;

void solve(){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int ans = a + b + c + d + e;
	if(ans % 5 || ans < 5) cout << "-1\n";
	else cout << ans / 5 << endl;
}

int main(){
	solve();
	return 0;
}

