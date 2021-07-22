#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	int l = (n / 4) + (n % 4 ? 1:0);
	n -= l;
	while(n--){
		cout << 9;
	}
	while(l--){
		cout << 8;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

