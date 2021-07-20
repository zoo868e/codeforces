#include"bits/stdc++.h"
#define ll long long int

using namespace std;

pair<int, int> maxmin(ll a){
	pair<int, int> ret;
	ret.first = 0;
	ret.second = 9;
	int t;
	while(a > 0){
		t = a % 10;
		ret.first = max(ret.first, t);
		ret.second = min(ret.second, t);
		a = a / 10;
	}
	return ret;
}

void solve(){
	ll a, k;
	cin >> a >> k;
	pair<int, int> t;
	while(--k){
		t = maxmin(a);
//		cout << "t.first = " << t.first << ", t.second = " << t.second << endl;
		if(t.second == 0)break;
		a = a + t.first * t.second;
	}
	cout << a << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

