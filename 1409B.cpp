#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	long long int a, b, x, y, n;
	cin >> a >> b >> x >> y >> n;
	long long int c, d, ans = 0, m;
	m = n;
	c = min(a - x, m);
	m -= c;
	d = min(b - y, m);
	ans = (a - c) * (b - d);

	m = n;
	c = min(b - y, m);
	m -= c;
	d = min(a - x, m);
	ans = min((a - d) * (b - c), ans);
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

