#include"bits/stdc++.h"

using namespace std;

void solve(){
	string s;
	cin >> s;
	vector<int> a;
	a.push_back(0);
	for(size_t i = 0;i < s.size();i++){
		if(s[i] == 'R')a.push_back(i + 1);
	}
	a.push_back(s.size() + 1);
	int ans = 0;
	for(size_t i = 0;i < a.size() - 1;i++){
		ans = max(ans, a[i + 1] - a[i]);
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

