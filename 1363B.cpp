#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	string s;
	cin >> s;
	int a[2], d[2], ans = s.size();
	memset(a, 0, sizeof(a));
	memset(d, 0, sizeof(d));
	int i = 0;
	while(s[i]){
		a[s[i] - '0']++;
		i++;
	}
	i = 0;
	while(s[i]){
		d[s[i] - '0']++;
		i++;
		ans = min(ans, min(a[0] - d[0] + d[1], a[1] - d[1] + d[0]));
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

