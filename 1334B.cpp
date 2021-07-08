#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, x, t;
	cin >> n >> x;
	vector<int> a;
	for(int i = 0;i < n;i++){
		cin >> t;
		a.push_back(t);
	}
	sort(a.begin(), a.end());
	ll remain = 0;
	int i, ans = 0;
	for(i = (int)a.size() - 1;i >= 0 && remain >= 0;i--){
		remain += (a[i] - x);
		if(remain >= 0)ans++;
//		cout << remain << endl;
	}
	cout << ans << endl;
	return;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

