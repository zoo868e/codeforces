#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	unsigned long long int n;
	cin >> n;
	cout << n * (n - 1) * (n + 1) / 3 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

