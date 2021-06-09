#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int a;
	cin >> a;
	cout << (360 % abs(a - 180) ? "NO":"YES") << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

