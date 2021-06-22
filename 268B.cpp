#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int ans = n;
	for(int i = 1; i <= n;i++){
		ans += (n - i) * i;
	}
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}

