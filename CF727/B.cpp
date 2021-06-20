#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	long long int sum[n + 1];
	sum[0] = 0;
	for(int i = 1;i <= n;i++){
		sum[i] = sum[i - 1] + s[i - 1] - 'a' + 1;
	}
	for(int i = 0;i < q;i++){
		int a, b;
		cin >> a >> b;
		cout << sum[b] - sum[a - 1] << endl;
	}
}

int main(){
	solve();
	return 0;
}

