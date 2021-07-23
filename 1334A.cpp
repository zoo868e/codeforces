#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	pair<int, int> a[n];
	bool flag = true;
	for(int i = 0;i < n;i++){
		cin >> a[i].first >> a[i].second;
		if(a[i].first < a[i].second)flag = false;
	}
	for(int i = 1;i < n;i++){
		if(a[i].first < a[i - 1].first || a[i].second < a[i - 1].second){
			flag = false;
			break;
		}
		if(a[i].first == a[i - 1].first && a[i].second > a[i - 1].second){
			flag = false;
			break;
		}
		if(a[i].first - a[i - 1].first < a[i].second - a[i - 1].second){
			flag = false;
			break;
		}
	}
	if(flag)cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

