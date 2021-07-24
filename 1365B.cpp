#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	int t, o = 0, z = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		cin >> t;
		if(t == 1)o++;
		if(t == 0)z++;
	}
	if(!o || !z){
		for(int i = 1;i < n;i++){
			if(a[i - 1] > a[i]){
				cout << "NO\n";
				return;
			}
		}
		cout << "YES\n";
	}
	else cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

