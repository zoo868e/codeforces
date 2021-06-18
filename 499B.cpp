#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, m;
	cin >> n >> m;
	vector<string> a, b, c, d;
	a.resize(m);
	b.resize(m);
	d.resize(m);
	for(int i = 0;i < m;i++){
		cin >> a[i] >> b[i];
		d[i] = a[i].size() <= b[i].size() ? a[i]:b[i];
	}
	for(int i = 0;i < n;i++){
		string t;
		cin >> t;
		auto it1 = find(a.begin(), a.end(), t);
		auto it2 = find(b.begin(), b.end(), t);
		if(it1 != a.end())
			cout << d[distance(a.begin(), it1)] << (i < (n - 1) ? " ":"\n");
		else
			cout << d[distance(b.begin(), it2)] << (i < (n - 1) ? " ":"\n");
	}
}

int main(){
	solve();
	return 0;
}

