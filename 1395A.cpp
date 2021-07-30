#include"bits/stdc++.h"
#define ll long long int

using namespace std;

bool checker(ll *a){
	int ret = 0;
	for(int i = 0;i < 4;i++){
		ret += a[i] % 2;
	}
	return !(ret > 1);
}

void solve(){
	ll a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	if(checker(a))cout << "YES\n";
	else if(a[0] > 0 && a[1] > 0 && a[2] > 0){
		a[0]--;
		a[1]--;
		a[2]--;
		a[3]++;
		if(checker(a))cout << "YES\n";
		else cout << "NO\n";
	}
	else cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

