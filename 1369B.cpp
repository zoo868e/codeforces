#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	string s;
	int n, p1, p0;
	cin >> n >> s;
	int i = 0;
	while(s[i] == '0'){
		cout << 0;
		i++;
	}
	p1 = i;
	i = n - 1;
	while(s[i] == '1')i--;
	p0 = i;
	if(p0 < p1){
		while(p1 < n){
			cout << 1;
			p1++;
		}
	}
	else {
		cout << 0;
		while(p0 < n - 1){
			cout << 1;
			p0++;
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

