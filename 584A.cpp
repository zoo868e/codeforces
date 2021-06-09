#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, t;
	cin >> n >> t;
	if(n == 1 && t == 10){
		cout << -1 << endl;
		return;
	}
	cout << t;
	int d = 1;
	if(t == 10)d = 2;
	while(d < n){
		cout << 0;
		d++;
	}
	cout << endl;
}

int main(){
	solve();
	return 0;
}

