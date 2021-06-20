#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, a, b;
	cin >> n >> a >> b;
	if(n - a > b + 1)cout << b + 1 << endl;
	else{
		cout << n - a << endl;
	}
}

int main(){
	solve();
	return 0;
}

